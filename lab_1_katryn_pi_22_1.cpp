#include <iostream>
#include <string>
#include <iomanip>

int main() {
    std::string name;
    int day, month, year;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your birth date (dd mm yyyy): ";
    std::cin >> day >> month >> year;

    std::cout << "Nice to meet you, " << name << "!" << std::endl;
    std::cout << "Do you know that your birth date will have different format in different countries, e.g.:" << std::endl;

    // Poland: YYYY-MM-DD
    std::cout << "-- Poland: " << year << "-"
              << std::setw(2) << std::setfill('0') << month << "-"
              << std::setw(2) << std::setfill('0') << day << std::endl;

    // Finland: D.M.YYYY
    std::cout << "-- Finland: " << day << "." << month << "." << year << std::endl;

    // Spain: DD/MM/YYYY
    std::cout << "-- Spain: "
              << std::setw(2) << std::setfill('0') << day << "/"
              << std::setw(2) << std::setfill('0') << month << "/"
              << year << std::endl;

    // USA: MM/DD/YYYY
    std::cout << "-- USA: "
              << std::setw(2) << std::setfill('0') << month << "/"
              << std::setw(2) << std::setfill('0') << day << "/"
              << year << std::endl;

    // Ukraine: DD.MM.YYYY
    std::cout << "-- Ukraine: "
              << std::setw(2) << std::setfill('0') << day << "."
              << std::setw(2) << std::setfill('0') << month << "."
              << year << std::endl;

    return 0;
}