#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::pair;
using std::string;
using std::vector;

class Families {
    using Child    = pair<string, string>;
    using Children = vector<Child>;
    using Data     = map<string, Children>;

private:
    Data _data;

public:
    auto add(const string& last_name, const string& first_name, const string& birthday) -> void {
        _data[last_name].push_back({first_name, birthday});
    }

    auto print() const -> void {
        for (const auto& pair : _data) {
            cout << pair.first << ":\n";
            for (const auto& child : pair.second) {
                cout << child.first << " " << child.second << endl;
            }
            cout << endl;
        }
    }
};

auto main() -> int {
    Families families;
    auto msg = "Please enter last name, first name and birthday:\n";
    for (string l, f, b; cout << msg, cin >> l >> f >> b; families.add(l, f, b)) {
        ;
    }
    families.print();
}
