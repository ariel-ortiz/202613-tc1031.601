#include <iostream>
#include "intlist.h"
#include "recursion.h"

int main()
{
    IntList a {4, 8, 15, 16};
    std::cout << first(a) << "\n";
    std::cout << rest(a) << "\n";
    std::cout << cons(23, a) << "\n";
    std::cout << is_empty(a) << "\n";
    std::cout << is_empty(IntList {}) << "\n";
    std::cout << size(a) << "\n";
    std::cout << size(IntList {1, 1, 1, 1, 1, 1, 1}) << "\n";
    std::cout << size(IntList {}) << "\n";
    std::cout << cons_end(42, a) << "\n";
    return 0;
}
