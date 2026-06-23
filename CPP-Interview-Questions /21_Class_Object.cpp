#include <iostream>
using namespace std;

class Student {
public:
    int id;
    string name;

    void display() {
        cout << id << " " << name << '\n';
    }
};

int main() {
    Student s;
    s.id = 101;
    s.name = "Juned";

    s.display();

    return 0;
}
