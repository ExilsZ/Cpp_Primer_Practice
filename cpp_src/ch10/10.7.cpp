#include <algorithm>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::fill_n;
using std::vector;

auto main() -> int {
    vector<int> vec;
    vec.resize(10);
    // vec.reserve(10);
    fill_n(vec.begin(), 10, 0);

    for (auto i : vec) {
        cout << i << " ";
    }
    cout << endl;
}
