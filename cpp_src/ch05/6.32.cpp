#include <iostream>
using std::cin;
using std::cout;
using std::endl;

auto get(int* array, int index) -> int& { return array[index]; }

auto main() -> int {
    int ia[10];
    for (int i = 0; i != 10; ++i) {
        get(ia, i) = i;
    }
}
