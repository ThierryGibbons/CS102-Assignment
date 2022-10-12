//
//  CS102 - Task 4
//
//  Created by Thierry Gibbons on 13/10/22.
//

#include <iostream>

using namespace std;

int main() {

    //  Variables
    int cNum;
    string cName;
    int cUnits;
    float amount{};

    //  Set Rates
    struct {
        float r100{.3f};    //100           -   .3 per unit
        float r200{.5f};    //101-200       -   .5 per unit
        float r300{.8f};    //201-300       -   .8 per unit
        float rOver{1.f};   //301 above     -    1 per unit
    } rates;

    //  User input
    cout << "Auckland Power - Customer Bill Generator\n\n****************************************\n\n";   //Title
    cout << "Enter Customer Name : ";     //Customer Name
    getline(cin, cName);
    cout << "Enter Customer Number : ";   //Customer Number
    cin >> cNum;
    cout << "Enter consumed units : ";    //Customer Units
    cin >> cUnits;


    //First 100 units
    if (cUnits <= 100)
        amount += cUnits * rates.r100;
    else
        amount += 100 * rates.r100;

    //Second 100 units
    if (cUnits <= 200)
        amount += (cUnits - 100) * rates.r200;
    else
        amount += 100 * rates.r200;

    //Third 100 units
    if (cUnits <= 300)
        amount += (cUnits - 200) * rates.r300;
    else    //leftover units
        amount += (100 * rates.r300) + ((cUnits - 300) * rates.rOver);

    //  Output Bill
    cout << "\n\nAuckland Power - Customer Bill\n\n********************\n";
    cout << "\nCustomer Number : " << cNum << endl;
    cout << "\nCustomer Name : " << cName << endl;
    cout << "\nUnits Consumed : " << cUnits << endl;
    cout << "\nAmount : " << amount << endl;
    cout << "\n********************\n";
}
