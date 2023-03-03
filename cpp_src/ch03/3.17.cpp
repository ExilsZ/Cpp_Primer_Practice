#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    vector<string> ivec;
    string s;
    while (cin >> s) {
        ivec.push_back(s);
    }
    for (auto& s : ivec) {
        for (auto& c : s) {
            c = toupper(c);
        }
    }
    for (auto& s : ivec) {
        cout << s << endl;
    }
}
