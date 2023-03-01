#include <iostream>

auto main() -> int {
    int sum{0}, i{50};
    while (i <= 100) {
        sum += i;
        i++;
    }
    std::cout << sum << std::endl;
}
