#include <forward_list>
#include <iostream>
#include <string>

using std::string;

using std::forward_list;

auto find_and_insert(forward_list<string>& fl, const string& str1, const string& str2) -> void {
    auto prev = fl.before_begin();
    auto curr = fl.begin();
    while (curr != fl.end()) {
        if (*curr == str1) {
            fl.insert_after(curr, str2);
            return;
        }
        prev = curr;
        ++curr;
    }
    fl.insert_after(prev, str2);
}

auto main() -> int {
}
