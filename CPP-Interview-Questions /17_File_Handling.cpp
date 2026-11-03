#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("sample.txt");
    out << "Hello File Handling";
    out.close();

    ifstream in("sample.txt");

    string line;
    getline(in, line);

    cout << line << '\n';

    in.close();

    return 0;
}
