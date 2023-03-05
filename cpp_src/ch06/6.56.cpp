#include <iostream>
#include <vector>
using std::vector;

auto add(int a, int b) -> int { return a + b; };

auto subtract(int a, int b) -> int { return a - b; };

auto multiply(int a, int b) -> int { return a * b; };

auto divide(int a, int b) -> int { return (b != 0) ? a / b : 0; };

auto main() -> int {
    vector<decltype(add)*> vec{add, subtract, multiply, divide};
    for (auto f : vec) {
        std::cout << f(2, 2) << std::endl;
    }
}
