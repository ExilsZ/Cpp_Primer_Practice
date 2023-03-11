#include <iostream>
#include <string>
#include <utility>
#include <vector>

auto main() -> int {
    std::vector<std::pair<std::string, int>> vec;
    std::string str;
    int i{0};

    while (std::cin >> str >> i) {
        vec.emplace_back(str, i);
    }
    for (const auto& p : vec) {
        std::cout << p.first << ":" << p.second << std::endl;
    }
}
