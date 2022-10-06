//
//   CS102 - Task 1
//
//   Created by Thierry Gibbons on 5/10/22.
//


/*
 Equasions:
	x1 = (-numB + sqrt(numB * numB - 4 * numA * numC)) / (2 * numA);
	x2 = (-numB - sqrt(numB * numB - 4 * numA * numC)) / (2 * numA);
 */

#include <iostream>
#include <cmath>

using namespace std;

float realCalcX1(float x1, float numA, float numB, float numC)
{
    x1 = numB * numB - 4 * numA * numC;

    return x1;
}

float realCalcX2( float x2, float numA, float numB, float numC)
{
    x2 = numB * numB - 4 * numA * numC;

    return x2;
}

int main()
{
    //var
    float numA, numB, numC;
    float x1{}, x2{};
    float findRealX1, findRealX2;
	float calcX1, calcX2;

    //console input
    cout << "Enter a, b, c: ";
    cin >> numA >> numB >> numC;

    findRealX1 = realCalcX1(x1, numA, numB, numC);
    findRealX2 = realCalcX2(x2, numA, numB, numC);

    if (findRealX1 < 0 && findRealX2 < 0) {
        //do this
        cout << "roots are imaginary";
    }
    else if (findRealX1 == 0 && findRealX2 == 0) {
        //do that
        cout << "roots are real and equal";
    }
    else {
        //break
        cout << "roots are real and unequal";
    }

	calcX1 = (-numB + sqrt(findRealX1)) / (2 * numA);
	calcX2 = (-numB - sqrt(findRealX2)) / (2 * numA);


	cout << endl << "x1: " << calcX1 << "\t";
    cout << "x2: " << calcX2 << endl;


}
