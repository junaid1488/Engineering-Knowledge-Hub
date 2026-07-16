#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>
using namespace std;

queue<int> q;
mutex mtx;
condition_variable cv;

void producer() {
    for (int i = 1; i <= 5; i++) {
        unique_lock<mutex> lock(mtx);
        q.push(i);
        cout << "Produced: " << i << endl;
        lock.unlock();
        cv.notify_one();
    }
}

void consumer() {
    for (int i = 1; i <= 5; i++) {
        unique_lock<mutex> lock(mtx);
        cv.wait(lock, [] { return !q.empty(); });
        cout << "Consumed: " << q.front() << endl;
        q.pop();
    }
}

int main() {
    thread p(producer), c(consumer);
    p.join();
    c.join();
    return 0;
}
