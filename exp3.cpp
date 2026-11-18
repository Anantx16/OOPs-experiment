#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Default Constructor
    Student() {
        name = "Unknown";
        age = 0;
    }

    // Parameterized Constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Copy Constructor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
    }

    void display() {
        cout << "Name: " << name
             << " Age: " << age << endl;
    }
};

int main() {
    Student s1;
    Student s2("Yash", 19);
    Student s3 = s2;

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
