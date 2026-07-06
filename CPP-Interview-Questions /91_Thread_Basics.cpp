#include <iostream>
#include <thread>
using namespace std;

void printMessage() {
    cout << "Thread is running..." << endl;
}

int main() {
    thread t(printMessage);

    t.join();

    cout << "Main thread finished." << endl;

    return 0;
}
