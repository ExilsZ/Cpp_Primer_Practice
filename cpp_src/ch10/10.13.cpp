#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using std::string;

auto predicate(const string& s) -> bool {
    return s.size() >= 5;
}

auto main() -> int {
    std::vector<string> svec{"a", "as", "aasss", "aaaaassaa", "aaaaaabba", "aaa"};
    auto pivot = std::partition(svec.begin(), svec.end(), predicate);
    for (auto it = svec.begin(); it != pivot; ++it) {
        std::cout << *it << " ";
    }
}
