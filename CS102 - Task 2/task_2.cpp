//
//  CS102 - Task 2
//
//  Created by Thierry Gibbons on 6/10/22.
//

//  Includes:
#include <iostream>

using namespace std;

// Prototype Functions
void divis7(int, int);
void primeList(int, int);

int main() {

    //  Variables
    int startingNum{}, endingNum{}, tempNum{};
    bool runTime = true;

    //  Loop to get correct user input
    while (runTime) {

        //  User Input
        cout << "Entering starting number: ";
        cin >> startingNum;
        cout << "Enter ending number: ";
        cin >> endingNum;
        cout << endl;

        //  Check if the starting number is lesser than the ending number
        if (startingNum > endingNum) {

            //  Swap starting number with ending number
            tempNum = startingNum;
            startingNum = endingNum;
            endingNum = tempNum;

            cout << "Swapped starting number and ending number.";

            runTime = false;    //exit loop

        } else if (startingNum == endingNum) {
            cout << "Please enter two differnt numbers." << endl;

        } else runTime = false;
    }

    //  Output: Numbers divisible by 7 within range
    cout << "Numbers divisible by 7 from " << startingNum << " to " << endingNum << endl
    << "******************************\n";  //Numbers divisible by 7 - header
    divis7(startingNum, endingNum);  //Finds numbers divisible by 7 within range & displays them

    //  Output: Prime numbers within range
    cout << "\n\nPrime Numbers\n*************" << endl;     //Prime Numbers - header
    primeList(startingNum, endingNum);  //Finds numbers within range & displays them

}


//  Functions:
void divis7(int startingNum, int endingNum) {

    //  Interate through all numbers from starting number to ending number
    for (int i = startingNum; i <= endingNum; i++) {


        if (i % 7 == 0) {   //  Check if the number is divisible by 7
            if (i >= endingNum -1) { cout << i; }   //Output: Found number divisible by 7 without comma
            else { cout << i << ", "; }             //Output: with comma

        }
    }
}

void primeList(int startingNum, int endingNum) {

    cout << "Prime numbers between (" << startingNum << " and " << endingNum << ") :";

    int primeCount{};   //Create prime counter set to 0

    for (int i = startingNum; i <= endingNum; i++) {

        bool prime = true; //Set runPrime to true

        //  Check for factors of i
        for (int j = 2; j < i; j++) {

            if (i % j == 0) {
                prime = false;
                break;
            }
        }
        // Run: if no factors where found
        if (prime) {
            cout << i << " ";  //Output: Found Prime Number
            primeCount++;       //Increase prime counter by 1
        }
    }

    cout << "\nTotal number of prime numbers from (" << startingNum << " to " << endingNum << ") :" << primeCount << endl;

}
