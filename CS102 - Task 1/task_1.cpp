/*
  main.cpp
  CS102 - Task 1

  Created by Thierry Gibbons on 5/10/22.
*/


#include <iostream>
#include <cmath>

using namespace std;

float taskCalcX1(float x1, float numA, float numB, float numC)
{
    x1 = (numB + sqrt(numB * numB - 4 * numA * numC)) / (2 * numA);

    return x1;
}

float taskCalcX2( float x2, float numA, float numB, float numC)
{
    x2 = (numB - sqrt(numB * numB - 4 * numA * numC)) / (2 * numA);

    return x2;
}

int main()
{
    //var
    float numA;
    float numB;
    float numC;
    float x1{}, x2{};
    float findRealX1;
    float findRealX2;
    //console input
    cout << "Enter a, b, c: ";
    cin >> numA >> numB >> numC;

    findRealX1 = taskCalcX1(x1, numA, numB, numC);
    findRealX2 = taskCalcX2(x2, numA, numB, numC);

    if (findRealX1 > 0 && findRealX2 > 0) {
        //do this
        cout << "roots are real and unequal";
    }
    else if (findRealX1 == 0 && findRealX2 == 0) {
        //do that
        cout << "roots are real and equal";
    }
    else {
        //break
        cout << "roots are imaginary";
    }


    cout << endl << "x1: " << findRealX1 << "\t";
    cout << "x2: " << findRealX2 << endl;


}
