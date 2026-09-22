#include <iostream>
#include "stack.h"

int main()
{
    Stack<int> s(4);

    std::cout << "Capacity = " << s.capacity() << "\n";
    std::cout << "Size = " << s.size() << "\n";

    s.push(4);
    s.push(8);
    s.push(15);
    s.push(16);
    // s.push(23);

    std::cout << "Capacity = " << s.capacity() << "\n";
    std::cout << "Size = " << s.size() << "\n";

    std::cout << s.pop() << "\n";
    std::cout << s.pop() << "\n";
    std::cout << s.pop() << "\n";
    std::cout << s.pop() << "\n";
    // std::cout << s.pop() << "\n";

    return 0;
}
