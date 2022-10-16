//
//   CS102 - Task 1
//
//   Created by Thierry Gibbons.
//

//  Includes:
#include <iostream>
#include <cmath>

using namespace std;


//  Calculate x1 & x2 real
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
    //  Variables
    float numA, numB, numC;
    float x1{}, x2{};
    float findRealX1, findRealX2;
	float calcX1, calcX2;

    //  Console Input
    cout << "Enter a, b, c: ";
    cin >> numA >> numB >> numC;

    //  Run x1 & x2 calculate real script
    findRealX1 = realCalcX1(x1, numA, numB, numC);
    findRealX2 = realCalcX2(x2, numA, numB, numC);

    //  Output: roots are ?
    if (findRealX1 < 0 && findRealX2 < 0) {
        cout << "roots are imaginary";
    }
    else if (findRealX1 == 0 && findRealX2 == 0) {
        cout << "roots are real and equal";
    }
    else {
        cout << "roots are real and unequal";
    }

  //  Calculate x1 & x2
	calcX1 = (-numB + sqrt(findRealX1)) / (2 * numA);
	calcX2 = (-numB - sqrt(findRealX2)) / (2 * numA);

  //  Output: x1 & x2
	cout << endl << "x1: " << calcX1 << "\t";
  cout << "x2: " << calcX2 << endl;


}
