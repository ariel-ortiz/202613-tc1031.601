#include <iostream>
#include <set>
#include <map>

int main() {
    std::set<int> x {7, 2, 6, 3};
    x.insert(5);
    x.insert(4);
    x.erase(2);
    for (int i : x) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    std::map<std::string, int> y;
    y["one"] = 1;
    y["two"] = 2;
    y["three"] = 3;
    y["four"] = 4;
    y["five"] = 5;

    for (auto pair : y) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }

    return 0;
}
