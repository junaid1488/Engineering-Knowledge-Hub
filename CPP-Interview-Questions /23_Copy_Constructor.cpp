#include <iostream>
using namespace std;

class Student {
public:
    int id;

    Student(int id) {
        this->id = id;
    }

    Student(const Student& obj) {
        id = obj.id;
    }
};

int main() {
    Student s1(101);
    Student s2 = s1;

    cout << s2.id << '\n';

    return 0;
}
