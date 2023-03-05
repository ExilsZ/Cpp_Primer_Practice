#include <iostream>
#include <istream>
using std::cout;
using std::istream;
using std::string;

auto func(istream& is) -> istream& {
    string buf;
    while (is >> buf) {
        cout << buf << " ";
    }
    is.clear();
    return is;
}
