#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car {
private:
    string brand;
    int cylinders;
    int power;

public:
    Car();
    Car(string b, int c, int p);
    Car(const Car& other);

    void setBrand(string b);
    void setCylinders(int c);
    void setPower(int p);

    string getBrand() const;
    int getCylinders() const;
    int getPower() const;

    void changePower(int newPower);
    void input();
    void print() const;

    operator string() const;
};

#endif
