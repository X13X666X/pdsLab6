#pragma once
#include <iostream>
#include <string>
using namespace std;

class Lorry {
public:
    class Car {
    private:
        string brand;
        int cylinders;
        double power;
        static int carCount;
    public:
        Car();
        Car(string brand, int cylinders, double power);
        Car(const Car& other);
        ~Car();

        string getBrand() const;
        int getCylinders() const;
        double getPower() const;

        void setBrand(string brand);
        void setCylinders(int cylinders);
        void setPower(double power);

        Car& operator=(const Car& other);
        void changePower(double newPower);
        operator string() const;

        void input();
        void display() const;

        static int getCarCount();
    };

private:
    Car car;
    double capacity;
    static int lorryCount;

public:
    Lorry();
    Lorry(Car car, double capacity);
    Lorry(const Lorry& other);
    ~Lorry();

    Car getCar() const;
    double getCapacity() const;

    void setCar(Car car);
    void setCapacity(double capacity);

    Lorry& operator=(const Lorry& other);
    void changeCapacity(double newCapacity);
    operator string() const;

    void input();
    void display() const;

    static int getLorryCount();
};