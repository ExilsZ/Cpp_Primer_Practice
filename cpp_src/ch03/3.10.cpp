#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

auto main() -> int {
    string s{"Hello world!"};
    string result;
    for (auto& c : s) {
        if (!ispunct(c)) {
            result += c;
        }
    }
    cout << result << endl;
}
