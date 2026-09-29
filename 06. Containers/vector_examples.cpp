#include <algorithm>
#include <iostream>
#include <vector>

template<typename T>
void print_vector(const std::vector<T>& vec)
{
    for (T elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << "\n";
}

// Return true if a should come before b, or false otherwise.
bool compare_by_size(const std::string& a, const std::string& b)
{
    return a.size() > b.size();
}

int main()
{
    std::vector<int> a;
    std::vector<int> b {4, 8, 15, 16, 23, 42};
    std::vector<char> c(10, '*');
    c.reserve(50);

    std::cout << "a.capactiy() == " << a.capacity() << "\n";
    std::cout << "a.size() == " << a.size() << "\n";
    print_vector(a);

    std::cout << "b.capactiy() == " << b.capacity() << "\n";
    std::cout << "b.size() == " << b.size() << "\n";
    print_vector(b);

    std::cout << "c.capactiy() == " << c.capacity() << "\n";
    std::cout << "c.size() == " << c.size() << "\n";
    print_vector(c);
    c.push_back('!');
    std::cout << "c.capactiy() == " << c.capacity() << "\n";
    std::cout << "c.size() == " << c.size() << "\n";
    print_vector(c);
    std::cout << c.at(10) << "\n";
    // std::cout << c.at(11) << "\n";

    std::vector<std::string> d {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    print_vector(d);
    std::sort(d.begin(), d.end());
    print_vector(d);
    std::sort(d.begin(), d.end(), &compare_by_size);
    print_vector(d);

    return 0;
}
