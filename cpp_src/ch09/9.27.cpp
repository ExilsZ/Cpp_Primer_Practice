#include <forward_list>
#include <iostream>

using std::cout;
using std::forward_list;

auto remove_odds(forward_list<int>& flist) -> void {
    auto is_odd = [](int i) { return i & 0x1; };
    flist.remove_if(is_odd);
}

auto main() -> int {
    forward_list<int> data{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    remove_odds(data);
    for (auto i : data) {
        cout << i << " ";
    }
}
