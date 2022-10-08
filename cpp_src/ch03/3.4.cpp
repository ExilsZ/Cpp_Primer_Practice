#include <iostream>
#include <ostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    while (cin >> s1 >> s2) {
        // if (s1 == s2) {
        //     cout << "相等" << endl;
        // }
        // else {
        //     cout << "大的是：" << ((s1 > s2) ? s1 : s2) << endl;
        // }

        if (s1.size() == s2.size()) {
            cout << "等长" << endl;
        }
        else {
            cout << "长的是：" << ((s1.size() > s2.size()) ? s1 : s2) << endl;
        }
    }
}
