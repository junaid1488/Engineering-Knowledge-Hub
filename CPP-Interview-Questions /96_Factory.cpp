#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() { cout << "Circle\n"; }
};

class Square : public Shape {
public:
    void draw() { cout << "Square\n"; }
};

class Factory {
public:
    static Shape* create(char ch) {
        if (ch == 'C') return new Circle();
        return new Square();
    }
};

int main() {
    Shape* obj = Factory::create('C');
    obj->draw();
    delete obj;
    return 0;
}
