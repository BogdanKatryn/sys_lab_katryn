#include <iostream>
using namespace std;

int main() {
    int age = 16;
    bool parental_consent = true;
    bool ssn = true;
    bool accidents = false;

    if ((age >= 18 || (age > 15 && parental_consent)) && ssn && !accidents) {
        cout << "You are hired!" << endl;
    } else {
        cout << "Sorry, we cannot hire you!" << endl;
    }

    return 0;
}
