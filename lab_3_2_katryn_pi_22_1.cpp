#include <iostream>
using namespace std;

int main() {
    int original_number = 4;
    int number = original_number;

    cout << "Початкове значення: " << number << endl;

    number = number * 2;
    cout << "Після множення на 2: " << number << endl;

    number = number + 9;
    cout << "Після додавання 9: " << number << endl;

    number = number - 3;
    cout << "Після віднімання 3: " << number << endl;

    number = number / 2;
    cout << "Після ділення на 2: " << number << endl;

    number = number - original_number;
    cout << "Після віднімання original_number: " << number << endl;

    number = number % 3;
    cout << "Після модуля 3: " << number << endl;

    return 0;
}
