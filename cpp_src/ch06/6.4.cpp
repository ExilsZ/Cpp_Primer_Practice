#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

auto fact(int i) -> int { return (i > 1) ? (i * fact(i - 1)) : 1; }

auto interactive_fact() -> void {
    const int max{14};
    const string prompt{"请输入[1,14)之间的数字："};
    const string out_of_range{"\n输入不在允许范围内，重新输入："};
    for (int i{0}; cout << prompt, cin >> i;) {
        if (i >= 1 && i < max) { cout << fact(i) << endl; }
        else {
            cout << out_of_range << endl;
            continue;
        }
    }
}

auto main() -> int {
    interactive_fact();
}
