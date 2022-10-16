//
//  CS102 - Task 3
//
//  Created by Thierry Gibbons.
//

//  Includes:
#include <iostream>

using namespace std;

int main() {

    //  Variables
    int x{};
    int even{};

    //  Title
    cout << "Random numbers between 10 to 20\n*****************************************\n";

    srand((unsigned)time(NULL));

    for(int i=0; i<6; i++) {    //Loop 6 times

        x = 10 + (rand() % 11); //Random number 10-20

        //  Use proper commas in list
        if (i<5)
            cout << x << ", ";  //Output: with comma
        else
            cout << x << endl;  //Output: without comma

        //Count even numbers
        if (x % 2 == 0)
            even++;

    }

    //  Output even and odd numbers
    cout << "Number of even numbers in the list: " << even << endl;         //Output: # of even
    cout << "Number of odd numbers in the list: " << 6 - even << endl;      //Output: # of odd
}
