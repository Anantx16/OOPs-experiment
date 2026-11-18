#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Circle : public Shape {
private:
    float r;

public:
    Circle(float radius) {
        r = radius;
    }

    void area() {
        cout << "Area of Circle = "
             << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape {
private:
    float l, b;

public:
    Rectangle(float len, float bre) {
        l = len;
        b = bre;
    }

    void area() {
        cout << "Area of Rectangle = "
             << l * b << endl;
    }
};

class Triangle : public Shape {
private:
    float base, height;

public:
    Triangle(float b, float h) {
        base = b;
        height = h;
    }

    void area() {
        cout << "Area of Triangle = "
             << 0.5 * base * height << endl;
    }
};

int main() {
    Shape *s;

    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(3, 8);

    s = &c;
    s->area();

    s = &r;
    s->area();

    s = &t;
    s->area();

    return 0;
}
