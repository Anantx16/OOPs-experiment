#include <iostream>
using namespace std;

template <class T>
class Stack {
    T arr[10];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(T value) {
        if(top == 9) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = value;
    }

    void pop() {
        if(top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << "Deleted: "
             << arr[top--] << endl;
    }

    void display() {
        for(int i=top;i>=0;i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.display();

    Stack<float> s2;
    s2.push(1.1);
    s2.push(2.2);
    s2.display();

    Stack<string> s3;
    s3.push("Yash");
    s3.push("Copilot");
    s3.display();

    return 0;
}
