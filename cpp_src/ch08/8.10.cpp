#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::cerr;
using std::cout;
using std::endl;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;

auto main() -> int {
    ifstream ifs("./book.txt");
    if (!ifs) {
        cerr << "No data?" << endl;
        return -1;
    }

    vector<string> vecLine;
    string line;

    while (getline(ifs, line)) {
        vecLine.push_back(line);
    }

    for (auto& s : vecLine) {
        istringstream iss(s);
        string word;
        while (iss >> word) {
            cout << word << endl;
        }
    }
}
