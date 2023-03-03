#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;

auto main() -> int {
    int i{0}, j{0};
    cin >> i >> j;
    if (j == 0) { throw std::runtime_error("除数不能为0"); }
    cout << i / j << endl;
}
