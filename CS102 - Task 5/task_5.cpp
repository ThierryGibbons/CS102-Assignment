//
//  CS102 - Task 5
//
//  Created by Thierry Gibbons on 13/10/22.
//

#include <iostream>
#include <cstdlib>
#include <iomanip>  //iosteam manip

using namespace std;

int main() {
    int x, guess;

    srand((unsigned)time(NULL));
    x = (rand() % 11);

    //Input area??
    cout << setw (25) << "Guess Game" << endl;
    cout << setw (25) << "**********" << endl;
    cout << "\nYou have three attempts.\nGuess the correct number between 1 to 10.\n\n";

    for (int i=0; i < 3; i++) {
        cout << "\nChoice " << i+1 << ": ";
        cin >> guess;

        if (x == guess){
            cout << "\nCorrect!\n";
            break;
        } else if (i == 2) {
            cout << "\nWrong, no attempts remaining.\n\n\nCorrect number: " << x << endl;
        } else cout << "\nWrong, please try again.\n";
    }

}
