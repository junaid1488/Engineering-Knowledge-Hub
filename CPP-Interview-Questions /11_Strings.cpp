#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    cout << "Length: " << s.length() << '\n';

    reverse(s.begin(), s.end());

    cout << "Reversed: " << s << '\n';

    return 0;
}
