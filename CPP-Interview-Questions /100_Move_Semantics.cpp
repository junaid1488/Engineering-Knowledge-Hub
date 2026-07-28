#include <iostream>
#include <utility>
using namespace std;

class Demo {
    int* data;

public:

    Demo& operator=(Demo&& obj) {
        if (this != &obj) {
            delete data;
            data = obj.data;
            obj.data = nullptr;

    ~Demo() {
        delete data;
    }


    return 0;
}
