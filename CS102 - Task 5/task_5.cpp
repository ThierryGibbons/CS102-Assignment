//
//  CS102 - Task 5
//
//  Created by Thierry Gibbons on 13/10/22.
//

#include <iostream>
#include <iomanip>  //iosteam manip

using namespace std;

int main() {

    //  Variables
    int x, guess;

    srand((unsigned)time(NULL));  //setup random seed
    x = rand() % 10 + 1;          //generate random number

    //  Title - Centered
    cout << setw (25) << "Guess Game" << endl;
    cout << setw (25) << "**********" << endl;

    //  Output: Rules
    cout << "\nYou have three attempts.\nGuess the correct number between 1 to 10.\n\n";

    //  Guess Game
    for (int i=0; i < 3; i++) {     //Loop 3 times
        cout << "\nChoice " << i+1 << ": ";   //Display Attempt #
        cin >> guess;

        //  Check guess against correct number
        if (x == guess){
            cout << "\nCorrect!\n";
            break;
        } else if (i == 2) {
            cout << "\nWrong, no attempts remaining.\n\n\nCorrect number: " << x << endl;
        } else cout << "\nWrong, please try again.\n";
    }

}
