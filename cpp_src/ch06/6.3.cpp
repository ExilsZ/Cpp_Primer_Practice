#include <iostream>
#include <stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

auto fact(int i) -> int {
    if (i < 0) {
        runtime_error err("请输入非负整数");
        std::cout << err.what() << endl;
        return -1;
    }
    else {
        return (i > 1) ? (i * fact(i - 1)) : 1;
    }
}

auto main() -> int {
    int n{0};
    cin >> n;
    cout << fact(n) << endl;
}
