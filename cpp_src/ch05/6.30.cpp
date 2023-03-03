#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

auto str_subrange(const string& str1, const string& str2) -> bool {
    if (str1.size() == str2.size()) { return str1 == str2; }
    auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
    for (decltype(size) i = 0; i != size; ++i) {
        if (str1[i] != str2[i]) {
            return;
        };
    }
}

auto main() -> int {
}
