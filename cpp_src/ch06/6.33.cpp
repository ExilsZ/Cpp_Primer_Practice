#include <cstdio>
#include <iostream>
#include <vector>
using std::cout;
using std::vector;

auto print(auto begin, auto end) -> void {
    if (begin != end) {
        cout << *begin << " ";
        print(++begin, end);
    }
}

auto main() -> int {
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    print(vec.cbegin(), vec.cend());
}
