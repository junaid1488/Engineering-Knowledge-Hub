#include <iostream>
#include <vector>
using namespace std;

class Observer {
public:
    virtual void update() = 0;
};

class User : public Observer {
public:
    void update() {
        cout << "Notification Received\n";
    }
};

class Subject {
    vector<Observer*> obs;

public:
    void attach(Observer* o) {
        obs.push_back(o);
    }

    void notify() {
        for (auto o : obs)
            o->update();
    }
};

int main() {
    Subject s;
    User u1, u2;

    s.attach(&u1);
    s.attach(&u2);

    s.notify();

    return 0;
}
