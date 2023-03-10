#include <fstream>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::string;

auto main() -> int {
    ifstream ifs("./letter.txt");
    if (!ifs) { return -1; }

    string str;

    auto update_with = [&str](const string& cur) {
        if (string::npos == cur.find_first_not_of("aceimnorsuvwxz")) {
            str = str.size() < cur.size() ? cur : str;
        };
    };

    for (string cur; ifs >> cur; update_with(cur)) { ; }
    cout << str;
}
