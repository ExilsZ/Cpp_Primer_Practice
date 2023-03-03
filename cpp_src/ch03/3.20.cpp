#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    vector<int> ivec;
    int i;
    while (cin >> i) {
        ivec.push_back(i);
    }

    auto pb = ivec.begin();
    auto pe = ivec.end();

    while ((pb + 1) != pe) {
        cout << *pb + *(pb + 1) << " ";
        ++pb;
    }
    cout << endl;

    pb = ivec.begin();
    pe = ivec.end();
    while ((pb + 1) != pe) {
        cout << *pb + *(pe - 1) << " ";
        ++pb;
        --pe;
    }
    cout << endl;
}
