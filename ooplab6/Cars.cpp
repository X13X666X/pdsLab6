#include "Cars.h"
using namespace std;

int Lorry::Car::carCount = 0;
int Lorry::lorryCount = 0;

Lorry::Car::Car() {
    brand = "Unknown";
    cylinders = 0;
    power = 0.0;
    carCount++;
}

Lorry::Car::Car(string b, int c, double p) {
    brand = b;
    cylinders = c;
    power = p;
    carCount++;
}

Lorry::Car::Car(const Car& other) {
    brand = other.brand;
    cylinders = other.cylinders;
    power = other.power;
    carCount++;
}

Lorry::Car::~Car() {
    carCount--;
}


string Lorry::Car::getBrand() const { return brand; }
int Lorry::Car::getCylinders() const { return cylinders; }
double Lorry::Car::getPower() const { return power; }

void Lorry::Car::setBrand(string b) { brand = b; }
void Lorry::Car::setCylinders(int c) { cylinders = c; }
void Lorry::Car::setPower(double p) { power = p; }

Lorry::Car& Lorry::Car::operator=(const Car& other) {
    if (this != &other) {
        brand = other.brand;
        cylinders = other.cylinders;
        power = other.power;
    }
    return *this;
}

void Lorry::Car::changePower(double newPower) { power = newPower; }

Lorry::Car::operator string() const {
    return "Car: " + brand + ", Cylinders: " + to_string(cylinders) + ", Power: " + to_string(power);
}

void Lorry::Car::input() {
    cout << "Enter car brand: ";
    cin >> brand;
    cout << "Enter cylinders: ";
    cin >> cylinders;
    cout << "Enter power: ";
    cin >> power;
}

void Lorry::Car::display() const { cout << (string)(*this) << endl; }
int Lorry::Car::getCarCount() { return carCount; }

Lorry::Lorry() {
    car = Car();
    capacity = 0.0;
    lorryCount++;
}

Lorry::Lorry(Car c, double cap) {
    car = c;
    capacity = cap;
    lorryCount++;
}

Lorry::Lorry(const Lorry& other) {
    car = other.car;
    capacity = other.capacity;
    lorryCount++;
}

Lorry::~Lorry() {
    lorryCount--;
}


Lorry::Car Lorry::getCar() const { return car; }
double Lorry::getCapacity() const { return capacity; }

void Lorry::setCar(Car c) { car = c; }
void Lorry::setCapacity(double cap) { capacity = cap; }

Lorry& Lorry::operator=(const Lorry& other) {
    if (this != &other) {
        car = other.car;
        capacity = other.capacity;
    }
    return *this;
}

void Lorry::changeCapacity(double newCapacity) { capacity = newCapacity; }

Lorry::operator string() const { return (string)car + ", Capacity: " + to_string(capacity); }

void Lorry::input() {
    cout << "Enter lorry info:\n";
    car.input();
    cout << "Enter capacity: ";
    cin >> capacity;
}

void Lorry::display() const { cout << (string)(*this) << endl; }
int Lorry::getLorryCount() { return lorryCount; }