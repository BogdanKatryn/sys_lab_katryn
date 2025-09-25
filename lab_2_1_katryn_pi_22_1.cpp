#include <iostream>
using namespace std;

int main() {
    const double price_small = 25.0;
    const double price_large = 35.0;
    const double tax_rate = 0.06;
    const int valid_days = 30;

    int small_rooms, large_rooms;
    
    cout << "Введіть кількість маленьких кімнат: ";
    cin >> small_rooms;
    cout << "Введіть кількість великих кімнат: ";
    cin >> large_rooms;

    double cost = (small_rooms * price_small) + (large_rooms * price_large);
    double tax = cost * tax_rate;
    double total = cost + tax;

    cout << "\nКалькуляція вартості послуги прибирання кімнат:" << endl;
    cout << "Кількість маленьких кімнат: " << small_rooms << endl;
    cout << "Кількість великих кімнат: " << large_rooms << endl;
    cout << "Ціна за маленьку кімнату: " << price_small << "$" << endl;
    cout << "Ціна за велику кімнату: " << price_large << "$" << endl;
    cout << "Вартість: " << cost << "$" << endl;
    cout << "Податок: " << tax << "$" << endl;
    cout << "===============================" << endl;
    cout << "Загальна вартість: " << total << "$" << endl;
    cout << "Дана калькуляція дійсна протягом " << valid_days << " днів" << endl;

    return 0;
}
