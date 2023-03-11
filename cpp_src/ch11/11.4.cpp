#include <algorithm>
#include <iostream>
#include <map>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::string;

auto main() -> int {
    map<string, int> m;
    string word;
    while (cin >> word) {
        for (auto& c : word) {
            c = tolower(c);
        }

        word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());
        ++m[word];
    }

    for (const auto& elem : m) {
        cout << elem.first << " : " << elem.second << endl;
    }
}
