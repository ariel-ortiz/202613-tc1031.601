// Program that exemplifies the memory layout of a C++ program.
// See class notes for more details.
// 2026-08-25

#include <iostream>

// Code
void some_function()
{

}

// Unitialized global variables
int w;
int z;

// Initialized global variables
int x = 5;
int y = 10;

// Read Only global variables
const int h = 20;
const int i = 25;

int main()
{
    // Local (stack) variables
    int a;
    int b;

    // Dynamic (heap) objects
    int *p = new int;
    int *q = new int;

    std::cout << "Text segment:\n";
    std::cout << "&some_function = " << reinterpret_cast<void*>(&some_function) << "\n";
    std::cout << "&main          = " << reinterpret_cast<void*>(&main) << "\n";

    std::cout << "\nRead only segment:\n";
    std::cout << "&h             = " << &h << "\n";
    std::cout << "&i             = " << &i << "\n";

    std::cout << "\nInitialized data segment:\n";
    std::cout << "&x             = " << &x << "\n";
    std::cout << "&y             = " << &y << "\n";

    std::cout << "\nUninitialized data segment:\n";
    std::cout << "&w             = " << &w << "\n";
    std::cout << "&z             = " << &z << "\n";

    std::cout << "\nHeap:\n";
    std::cout << "p              = " << p << "\n";
    std::cout << "q              = " << q << "\n";

    std::cout << "\nStack:\n";
    std::cout << "&a             = " << &a << "\n";
    std::cout << "&b             = " << &b << "\n";

    delete p;
    delete q;

    return 0;
}
