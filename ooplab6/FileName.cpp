#include <iostream>
#include "Lorry.h"
using namespace std;

int main() {
    cout << "=== Car demo ===\n";
    Car car1("Toyota", 4, 150);
    Car car2;
    car2.input();

    cout << "\nCar 1:\n"; car1.print();
    cout << "\nCar 2:\n"; car2.print();

    cout << "\nChanging power of Car 1 to 180...\n";
    car1.changePower(180);
    car1.print();

    cout << "\nString conversion:\n" << string(car1) << "\n";

    cout << "\n=== Lorry demo ===\n";
    Lorry lorry1(car1, 12.5);
    Lorry lorry2;
    lorry2.input();

    cout << "\nLorry 1:\n"; lorry1.print();
    cout << "\nLorry 2:\n"; lorry2.print();

    cout << "\nChanging Lorry 1 brand to Volvo and capacity to 15...\n";
    lorry1.changeBrand("Volvo");
    lorry1.changeCapacity(15);

    cout << "\nUpdated Lorry 1:\n";
    lorry1.print();

    cout << "\nString conversion:\n" << string(lorry1) << "\n";

    return 0;
}
