#include <iostream>

void fun(int &t)
{
    t++;
}

int main()
{
    int x = 5;
    int &r = x;

    std::cout << "x = " << x << "\n";
    std::cout << "r = " << r << "\n";
    r++;
    std::cout << "x = " << x << "\n";
    std::cout << "r = " << r << "\n";

    int y = 10;
    std::cout << "y = " << y << "\n";
    fun(y);
    std::cout << "y = " << y << "\n";

    return 0;
}
