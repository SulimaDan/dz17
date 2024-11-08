#include <iostream>
#include <string>
using namespace std;

struct Complex {
    double real;
    double imag;
};

Complex add(const Complex& a, const Complex& b) {
    return { a.real + b.real, a.imag + b.imag };
}

void printComplex(const Complex& c) {
    cout << c.real << (c.imag >= 0 ? " + " : " - ") << abs(c.imag) << "i" << endl;
}

int main() {
    Complex a = { 3, 4 };
    Complex b = { 1, -2 };

    cout << "Сума: ";
    printComplex(add(a, b));

    return 0;
}













struct Car {
    string model;
    string color;
    string transmissionType;
};

void setCar(Car& car, const string& model, const string& color, const string& transmissionType) {
    car.model = model;
    car.color = color;
    car.transmissionType = transmissionType;
}

void displayCar(const Car& car) {
    cout << "Модель: " << car.model << "\n"
        << "Колір: " << car.color << "\n"
        << "Тип коробки передач: " << car.transmissionType << "\n";
}

int main() {
    Car car1;

    setCar(car1, "Toyota", "Червоний", "Автомат");
    displayCar(car1);

    return 0;
}
