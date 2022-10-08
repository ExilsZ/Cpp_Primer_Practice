#include <iostream>
#include <ostream>
#include <string>
using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {
        cout << s << endl;
    }

    string s2;
    while (cin >> s) {
        cout << s << endl;
    }
}
