#include <iostream>
#include <map>
#include <string>

using std::cout;
using std::endl;
using std::multimap;
using std::string;

auto main() -> int {
    multimap<string, string> authors{
        {"alan", "DMA"},
        {"pezy", "LeetCode"},
        {"alan", "CLRS"},
        {"wang", "FTP"},
        {"pezy", "CP5"},
        {"wang", "CPP-Concurrency"}};

    string author{"pezy"}, work{"CP5"};

    auto found = authors.find(author);
    auto count = authors.count(author);

    while (count) {
        if (found->second == work) {
            authors.erase(found);
            break;
        }
        ++found;
        --count;
    }

    for (const auto& author : authors) {
        cout << author.first << " " << author.second << endl;
    }
}
