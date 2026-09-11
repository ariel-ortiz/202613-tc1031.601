#include <iostream>
#include "linkedlist.h"

int main()
{
    LinkedList<char> a {'a', 'b', 'c'};
    a.insert_front('x');
    a.insert_front('y');
    a.insert_front('z');
    a.insert_back(65);
    a.insert_back(97);
    std::cout << a << "\n";
    return 0;
}
