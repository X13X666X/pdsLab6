#include "Cars.h"
using namespace std;

int main() {
    Lorry::Car c1;
    c1.display();

    Lorry::Car c2("BMW", 6, 320);
    c2.display();

    Lorry::Car c3 = c2;
    c3.changePower(400);
    c3.display();

    Lorry l1(c3, 1200);
    l1.display();
    l1.changeCapacity(2000);
    l1.display();

    Lorry l2;
    l2.input();
    l2.display();

    Lorry trucks[2] = { l1, l2 };
    for (int i = 0; i < 2; i++) {
        trucks[i].display();
    }


    cout << "\nCars created: " << Lorry::Car::getCarCount() << endl;
    cout << "Lorries created: " << Lorry::getLorryCount() << endl;

    return 0;
}