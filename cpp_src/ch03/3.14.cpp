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
    string i;
    while (cin >> i) {
        ivec.push_back(i);
    }
    for (auto& v : ivec) {
        cout << v << " ";
    }
}
