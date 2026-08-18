#include <iostream>
#include "dinoset.h"

int main()
{
    DinoSet a, b;
    a.add(DinoId::velociraptor);
    a.add(DinoId::tyrannosaurus);
    b.add(DinoId::pteranodon);
    b.add(DinoId::triceratops);
    b.add(DinoId::stegosaurus);
    b.add(DinoId::pteranodon);
    std::cout << "a = " << a.to_string() << "\n";
    std::cout << "b = " << b.to_string() << "\n";
    std::cout << a.contains(DinoId::velociraptor) << "\n";
    std::cout << a.contains(DinoId::pteranodon) << "\n";
    return 0;
}
