#include <iostream>

auto main() -> int {
    float val{0}, sum{0};
    for (; std::cin >> val;) {
        sum += val;
    }
    std::cout << sum;
}
