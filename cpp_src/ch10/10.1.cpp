#include <iostream>
#include <limits>
#include <list>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
#include <algorithm>

auto main() -> int {
    std::vector<int> v;
    int temp{0}, x{0};
    cout << "请输入一串整数：";
    while (cin >> temp) {
        v.push_back(temp);
    }

    if (cin.fail()) {
        cin.clear();                                                   // 清除失败状态，使 cin 恢复正常
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 清除缓冲区一行字符
    }

    cout << "请输入需要计数的值：";

    cin >> x;

    cout << "出现次数：" << std::count(v.begin(), v.end(), x) << endl;
}
