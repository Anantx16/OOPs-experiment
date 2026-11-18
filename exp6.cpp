#include <iostream>
using namespace std;

class Matrix {
    int a[2][2];

public:
    void input() {
        cout << "Enter 4 elements:\n";
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                cin >> a[i][j];
    }

    Matrix operator+(Matrix m) {
        Matrix temp;

        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                temp.a[i][j] = a[i][j] + m.a[i][j];

        return temp;
    }

    void display() {
        for(int i=0;i<2;i++) {
            for(int j=0;j<2;j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
};

// Function Overloading
class Demo {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Demo d;

    cout << "Integer Sum = "
         << d.add(10,20) << endl;

    cout << "Float Sum = "
         << d.add(10.5f,20.4f) << endl;

    Matrix m1,m2,m3;

    cout << "\nMatrix 1\n";
    m1.input();

    cout << "Matrix 2\n
