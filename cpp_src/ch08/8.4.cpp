#include <fstream>
#include <iostream>
#include <istream>
#include <string>
#include <vector>
using std::cout;
using std::ifstream;
using std::istream;
using std::string;
using std::vector;

auto ReadFileToVec(const string& filename, vector<string>& vec) -> void {
    ifstream ifs{filename};
    if (ifs) {
        string buf;
        while (std::getline(ifs, buf)) {
            vec.push_back(buf);
        }
    }
}

auto main() -> int {
    vector<string> vec;
    ReadFileToVec("./book.txt", vec);
    for (const auto& x : vec) {
        cout << x << "\n";
    }
}
