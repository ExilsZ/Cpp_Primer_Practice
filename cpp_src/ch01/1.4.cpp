#include <iostream>
int main() {
    std::cout << "输入两个整数：" << std::endl;
    int x{0}, y{0};
    std::cin >> x >> y;
    std::cout << "和为：" << x + y << " "
              << "积为：" << x * y << std::endl;
}
