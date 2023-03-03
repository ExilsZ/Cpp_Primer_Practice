#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

auto main() -> int {
    string prev{}, curr{};
    while (cin >> curr) {
        if (prev == curr) {
            cout << curr << " 出现重复" << endl;
            break;
        }
        else { prev = curr; }
    }
    if (cin.eof()) { cout << "无重复" << endl; }
}
