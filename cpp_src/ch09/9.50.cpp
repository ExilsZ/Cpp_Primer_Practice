#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

auto sum_for_int(const vector<string>& v) -> int {
    int sum{0};
    for (const auto& s : v) {
        sum += std::stoi(s);
    }
    return sum;
}

auto sum_for_float(const std::vector<std::string>& v) -> double {
    double sum{0.0};
    for (const auto& s : v) {
        sum += std::stof(s);
    }
    return sum;
}

auto main() -> int {
    std::vector<std::string> v = {"1", "2", "3", "4.5"};
    std::cout << sum_for_int(v) << std::endl;
    std::cout << sum_for_float(v) << std::endl;
}
