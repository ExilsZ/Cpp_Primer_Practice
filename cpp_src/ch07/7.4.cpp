#include <cstdio>
#include <iostream>
#include <string>
#include <utility>
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;
using std::string;

class Person {

    string name;
    string address;

    friend auto read(istream& is, Person& person) -> istream& {
        return is >> person.name >> person.address;
    };

    friend auto print(ostream& os, const Person& person) -> ostream& {
        return os << person.name << " " << person.address;
    };

public:
    [[nodiscard]] auto get_name() const -> const string& { return name; };

    [[nodiscard]] auto get_addr() const -> const string& { return address; };

    Person(string sname, string saddr) : name(std::move(sname)), address(std::move(saddr)){};
};

auto main() -> int {
    Person A{"A", "a"};
    // A.get_name();
    print(cout, A);
}
