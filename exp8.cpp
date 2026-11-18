#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {

    vector<int> v = {10,5,30,15,25};

    sort(v.begin(), v.end());

    cout << "Sorted Vector:\n";
    for(int x : v)
        cout << x << " ";

    cout << endl;

    auto it = find(v.begin(),
                   v.end(),
                   15);

    if(it != v.end())
        cout << "15 Found\n";

    map<int,string> student;

    student[1] = "Yash";
    student[2] = "Amit";
    student[3] = "Riya";

    cout << "\nMap Contents\n";

    for(auto p : student)
        cout << p.first
             << " "
             << p.second
             << endl;

    return 0;
}
