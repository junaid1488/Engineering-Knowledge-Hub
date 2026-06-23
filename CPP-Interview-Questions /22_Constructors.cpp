#include <iostream>
using namespace std;

class Student {
public:
    int id;
    string name;

    Student(int i, string n) {
        id = i;
        name = n;
    }

    void display() {
        cout << id << " " << name << '\n';
    }
};

int main() {
    Student s(101, "Juned");
    s.display();

    return 0;
}
