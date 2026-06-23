#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
    double cgpa;
};

int main() {
    Student s;

    s.id = 101;
    s.name = "Juned";
    s.cgpa = 8.5;

    cout << s.id << '\n';
    cout << s.name << '\n';
    cout << s.cgpa << '\n';

    return 0;
}
