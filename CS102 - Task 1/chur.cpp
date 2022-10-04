/*
 
 */

#include <iostream>
#include <cmath>

using namespace std;

float taskCalc(float x1, float x2, float numA, float numB, float numC)
{
    x1 = (numB + sqrt(numB * numB - 4 * numA * numC)) / (2 * numA);
    x2 = (numB - sqrt(numB * numB - 4 * numA * numC)) / (2 * numA);
    
    return x1,x2;
}

int main()
{
    //var
    float numA, numB, numC;
    float x1 =0.0, x2 =0.0;
    float rootReal, rootImaginary;
    float findReal;
    
    //console input
    cout << "Enter a, b, c: ";
    cin >> numA >> numB >> numC;

    findReal = taskCalc(x1, x2, numA, numB, numC);

    cout << findReal;
    
}
