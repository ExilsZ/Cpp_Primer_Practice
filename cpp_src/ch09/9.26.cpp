#include <array>
#include <deque>
#include <iostream>
#include <iterator>
#include <list>
#include <sstream>
#include <string>
#include <vector>

using std::list;
using std::string;
using std::vector;

auto main() -> int {
    std::array<int, 11> ia{0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    list<int> il(ia.begin(), ia.end());
    vector<int> iv(ia.begin(), ia.end());

    for (auto it = il.begin(); it != il.end();) {
        if (*it & 0x1) {
            it = il.erase(it);
        }
        else {
            ++it;
        }
    }
    for (auto it = iv.begin(); it != iv.end();) {
        if (!(*it & 0x1)) {
            iv.erase(it);
        }
        else {
            ++it;
        }
    }
}
