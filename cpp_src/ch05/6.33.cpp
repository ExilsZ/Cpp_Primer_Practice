#include <iostream>
#include <vector>
using std::cout;
using std::vector;
using Iter = vector<int>::const_iterator;

auto print(Iter first, Iter last) -> void {
    if (first != last) {
        cout << *first << " ";
        print(++first, last);
    }
}

auto main() -> int {
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    print(vec.cbegin(), vec.cend());
}
