#include <iostream>
using namespace std;

class Person {
protected:
    string name;

public:
    void setPerson(string n) {
        name = n;
    }
};

class Student : public Person {
protected:
    int rollNo;

public:
    void setStudent(int r) {
        rollNo = r;
    }
};

class GraduateStudent : public Student {
private:
    string specialization;

public:
    void setGraduate(string sp) {
        specialization = sp;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Specialization: "
             << specialization << endl;
    }
};

int main() {
    GraduateStudent g;

    g.setPerson("Yash");
    g.setStudent(101);
    g.setGraduate("Computer Engineering");

    g.display();

    return 0;
}
