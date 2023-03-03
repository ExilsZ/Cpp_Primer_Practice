#include <iostream>
#include <ostream>
#include <string>
using namespace std;

auto main() -> int {
    string s{"Hello world"};
    for (auto& p : s) {
        p = 'X';
    }
    std::cout << s << endl;
}
