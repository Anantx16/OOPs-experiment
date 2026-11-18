#include <iostream>
using namespace std;

int main() {
    int age = 20;
    float salary = 25000.50;
    char grade = 'A';
    bool status = true;

    const double PI = 3.14159;

    cout << "Age: " << age << endl;
    cout << "Salary: " << salary << endl;
    cout << "Grade: " << grade << endl;
    cout << "Status: " << status << endl;
    cout << "PI: " << PI << endl;

    int a = 10, b = 5;

    cout << "\nArithmetic Operators\n";
    cout << "Addition = " << a + b << endl;
    cout << "Subtraction = " << a - b << endl;
    cout << "Multiplication = " << a * b << endl;
    cout << "Division = " << a / b << endl;

    return 0;
}
