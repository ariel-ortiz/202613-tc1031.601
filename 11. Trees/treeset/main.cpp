#include <iostream>
#include <vector>
#include "treeset.h"

void print_int(int x)
{
    std::cout << x << " ";
}

int sum = 0;
void sum_int(int x)
{
    sum += x;
}

int main()
{
    TreeSet<int> t {10, 5, 15, 2, 7, 11, 20};
    std::cout << t.contains(2) << "\n";
    std::cout << t.contains(3) << "\n";
    t.inorder(print_int);
    t.inorder(sum_int);
    std::cout << "\n" << sum << "\n";
    t.preorder(print_int);
    std::cout << "\n";
    t.postorder(print_int);
    std::cout << "\n";
    t.levelorder(print_int);
    std::cout << "\n";
    std::cout << t.height() << "\n";

    return 0;
}
