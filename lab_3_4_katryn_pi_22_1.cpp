#include <iostream>
using namespace std;

int main() {
    int cents;
    cout << "Enter sum in cents: ";
    cin >> cents;

    int dollars = cents / 100;
    cents %= 100;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickels = cents / 5;
    cents %= 5;

    int pennies = cents;

    cout << "You can get this amount with:\n";
    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;

    return 0;
}
