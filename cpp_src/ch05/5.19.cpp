#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

auto main() -> int {
    string shorter;
    do {
        cout << "请输入两个字符串：";
        string a, b;
        cin >> a >> b;
        shorter = ((a.size() < b.size()) ? a : b);
        cout << "较短的是：" << shorter << endl;
    } while (!shorter.empty());
}
