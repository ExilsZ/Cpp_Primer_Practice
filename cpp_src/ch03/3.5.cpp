#include <iostream>
#include <ostream>
#include <string>
using namespace std;

int main() {
    string s;
    string t;
    // while (cin >> t) {
    //     s += t;
    // }
    // cout << s;

    while (cin >> t) {
        s += t + ' ';
    }
    cout << s;
}
