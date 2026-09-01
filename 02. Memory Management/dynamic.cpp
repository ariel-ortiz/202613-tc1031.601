#include <iostream>

int main()
{
    int *a = new int {5};
    int **p = &a;

    int *b = new int[5] {4, 8, 15, 16, 23};

    std::cout << "p   = " << p << "\n";
    std::cout << "*p  = " << *p << "\n";
    std::cout << "**p = " << **p << "\n";

    std::cout << "a  = " << a << "\n";
    std::cout << "*a = " << *a << "\n";

    *a = 10;

    std::cout << "a  = " << a << "\n";
    std::cout << "*a = " << *a << "\n";

    std::cout << "*b = " << *b << "\n";
    std::cout << "b[0] = " << b[0] << "\n";
    std::cout << "0[b] = " << 0[b] << "\n";
    std::cout << "b[4] = " << b[4] << "\n";
    std::cout << "*(b + 4)  = " << *(b + 4) << "\n";

    int *old_b = b;

    b++;
    std::cout << "*b = " << *b << "\n";

    b += 2;
    std::cout << "*b = " << *b << "\n";

    delete a;
    a = nullptr;
    delete a;
    delete [] old_b;
    std::cout << "*b = " << *b << "\n";

    return 0;
}
