#include <iostream>

void fun(int *q)
{
    (*q)++;
}

void fun2(int a)
{
    a++;
}

int main()
{
    int x = 5;
    int *p = &x;
    std::cout << "x  = " << x << "\n";
    std::cout << "&x = " << &x << "\n";
    std::cout << "p  = " << p << "\n";
    std::cout << "&p = " << &p << "\n";
    std::cout << "*p = " << *p << "\n";

    *p = 10;
    std::cout << "x  = " << x << "\n";

    int y = 8;
    std::cout << "y  = " << y << "\n";
    fun2(y);
    std::cout << "y  = " << y << "\n";
    fun(&y);
    std::cout << "y  = " << y << "\n";

    return 0;
}
