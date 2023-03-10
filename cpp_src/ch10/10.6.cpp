#include <algorithm>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::fill_n;
using std::vector;

auto main() -> int {
    vector<int> vec(10, 1);
    fill_n(vec.begin(), vec.size(), 0);

    for (auto i : vec) {
        cout << i << " ";
    }
    cout << endl;
}
