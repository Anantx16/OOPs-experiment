#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;

public:
    Vehicle(string b) {
        brand = b;
    }

    void displayBrand() {
        cout << "Brand: " << brand << endl;
    }
};

class Car : public Vehicle {
private:
    int seats;

public:
    Car(string b, int s) : Vehicle(b) {
        seats = s;
    }

    void display() {
        displayBrand();
        cout << "Seats: " << seats << endl;
    }
};

int main() {
    Car c("Toyota", 5);
    c.display();

    return 0;
}
