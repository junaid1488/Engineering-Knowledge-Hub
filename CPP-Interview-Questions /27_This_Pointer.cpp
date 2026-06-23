#include <iostream>
using namespace std;

class Student {
private:
    int id;

public:
    void setId(int id) {
        this->id = id;
    }

    void display() {
        cout << id << '\n';
    }
};

int main() {
    Student s;

    s.setId(101);
    s.display();

    return 0;
}
