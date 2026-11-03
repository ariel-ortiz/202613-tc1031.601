#include <algorithm>
#include <iostream>
#include <vector>

// Complexity: O(N)
template<typename T>
int sequential_search(const std::vector<T>& data, const T& value)
{
    for (int i = 0; i < data.size(); i++) {
        if (value == data.at(i)) {
            return i;
        }
    }
    return -1;
}

// Complexity: O(log N)
template<typename T>
int binary_search(const std::vector<T>& data, const T& value)
{
    int start = 0;
    int end = data.size() - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (value == data.at(mid)) {
            return mid;
        } else if (value < data.at(mid)) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    std::vector<std::string> names {
        "Thorin", "Balin", "Fili",
        "Bombur", "Kili", "Gloin",
        "Oin", "Dwalin", "Ori",
        "Dori", "Bofur", "Bifur",
        "Nori"
    };
    std::cout << sequential_search(names, std::string("Kili")) << "\n";
    std::cout << sequential_search(names, std::string("Gimli")) << "\n";

    std::sort(names.begin(), names.end());

    std::cout << binary_search(names, std::string("Kili")) << "\n";
    std::cout << binary_search(names, std::string("Gimli")) << "\n";

    return 0;
}
