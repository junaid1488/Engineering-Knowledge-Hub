#include <iostream>
using namespace std;

class Singleton {
private:
    static Singleton* instance;
    Singleton() {}

public:
    static Singleton* getInstance() {
        if (!instance)
            instance = new Singleton();
        return instance;
    }

    void show() {
        cout << "Singleton Object Created";
    }
};

Singleton* Singleton::instance = nullptr;

int main() {
    Singleton::getInstance()->show();
    return 0;
}
