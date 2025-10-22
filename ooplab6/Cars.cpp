#include "Car.h"
#include <iostream>
#include <sstream>
using namespace std;

Car::Car() {
    brand = "Unknown";
    cylinders = 0;
    power = 0;
}

Car::Car(string b, int c, int p) {
    brand = b;
    cylinders = c;
    power = p;
}

Car::Car(const Car& other) {
    brand = other.brand;
    cylinders = other.cylinders;
    power = other.power;
}

void Car::setBrand(string b) { brand = b; }
void Car::setCylinders(int c) { cylinders = c; }
void Car::setPower(int p) { power = p; }

string Car::getBrand() const { return brand; }
int Car::getCylinders() const { return cylinders; }
int Car::getPower() const { return power; }

void Car::changePower(int newPower) {
    power = newPower;
}

void Car::input() {
    cout << "Enter car brand: ";
    getline(cin, brand);
    cout << "Enter number of cylinders: ";
    cin >> cylinders;
    cout << "Enter power: ";
    cin >> power;
    cin.ignore();
}

void Car::print() const {
    cout << "Car brand: " << brand
         << "\nCylinders: " << cylinders
         << "\nPower: " << power << " hp\n";
}

Car::operator string() const {
    ostringstream oss;
    oss << "Brand: " << brand << ", Cylinders: " << cylinders << ", Power: " << power << " hp";
    return oss.str();
}
