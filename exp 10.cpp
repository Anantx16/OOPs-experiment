#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream fout("students.csv");

    fout << "101,Yash,85\n";
    fout << "102,Amit,90\n";
    fout << "103,Riya,88\n";

    fout.close();

    ifstream fin("students.csv");

    string line;

    cout << "CSV Contents:\n";

    while(getline(fin,line)) {
        cout << line << endl;
    }

    cout << "\nCurrent Position = "
         << fin.tellg() << endl;

    fin.close();

    return 0;
}
