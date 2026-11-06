#include <iostream>
#include <unordered_map>
#include <unordered_set>

int main()
{
    std::unordered_set<char> usc;
    usc.insert('b');
    usc.insert('c');
    usc.insert('a');
    usc.insert('b');

    for (char c : usc) {
        std::cout << c << " ";
    }
    std::cout << "\n";

    std::unordered_map<std::string, double> math_const;
    math_const["pi"] = 3.1415;
    math_const["e"] = 2.7182;
    math_const["sqrt2"] = 1.4142;
    math_const["phi"] = 1.618;

    std::cout << "size: " << math_const.size() << "\n";
    std::cout << math_const["e"] << "\n";
    math_const.erase("e");
    std::cout << "size: " << math_const.size() << "\n";
    std::cout << math_const.count("e") << "\n";
    std::cout << math_const.count("pi") << "\n";
    std::cout << "size: " << math_const.size() << "\n";

    for (auto p : math_const) {
        std::cout << p.first << ": " << p.second << "\n";
    }

    return 0;
}
