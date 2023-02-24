#include <iostream>

int main() {
    float val{0}, sum{0};
    for (; std::cin >> val;) {
        sum += val;
    }
    std::cout << sum;
}
