#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

auto main() -> int {
    for (int i{0}, j{0}; cout << "请输入两个整数：", cin >> i >> j;) {
        try {
            if (j == 0) { throw runtime_error("除数不能为0!"); }
            cout << i / j << endl;
        } catch (runtime_error& err) {
            cout << err.what() << " 是否重新输入(y/n)?" << endl;
            char c{};
            cin >> c;
            if (!cin || c == 'n') {
                break;
            }
        }
    }
}
