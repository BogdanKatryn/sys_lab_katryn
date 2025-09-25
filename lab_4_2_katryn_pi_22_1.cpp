#include <iostream>
using namespace std;

int main() {
    int age;
    bool has_car;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Do you own a car? (1 = yes, 0 = no): ";
    cin >> has_car;

    if (age < 16) {
        int n = 16 - age;
        cout << "Sorry, come back in " << n 
             << " years and be sure you own a car when you come back." << endl;
    } else {
        if (!has_car) {
            cout << "Sorry, you need to buy a car before you can drive!" << endl;
        } else {
            cout << "Yes - you can drive!" << endl;
        }
    }

    return 0;
}
