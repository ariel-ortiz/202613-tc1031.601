#include <iostream>

class X {

public:

    X(const std::string& name): _name(name)
    {
        std::cout << "Creating " << _name << "\n";
    }

    ~X()
    {
        std::cout << "Destroying " << _name << "\n";
    }

private:

    std::string _name;
};

X* fun()
{
    X e("E");
    X *f = new X("F");
    return f;
}

int main()
{
    std::cout << "main start\n";
    X *p = fun();
    X c("C");
    X d("D");
    delete p;
    std::cout << "main end\n";
    return 0;
}

// Global Variables
X a("A");
X b("B");
