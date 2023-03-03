#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    char q{0b01110001};
    int i = ~'q' << 6;
    cout << i << endl;
}
