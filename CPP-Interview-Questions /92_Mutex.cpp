#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex mtx;
int counter = 0;

void increment() {
    for (int i = 0; i < 1000; i++) {
        mtx.lock();
        counter++;
        mtx.unlock();
    }
}

int main() {
    thread t1(increment), t2(increment);

    t1.join();
    t2.join();

    cout << "Counter: " << counter;

    return 0;
}
