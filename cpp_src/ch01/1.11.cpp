#include <iostream>
using std::cin;
using std::cout;
using std::endl;

auto main() -> int {
    int a, b;
    cout << "请输入两个整数：" << endl;
    cin >> a >> b;
    if (a < b) {
        for (; a != b; a++) {
            cout << a << " ";
        }
        cout << b << endl;
    }
    else if (a == b) {
        cout << a << " ";
    }
    else {
        for (; a != b; a--) {
            cout << a << " ";
        }
        cout << b << endl;
    }
}
