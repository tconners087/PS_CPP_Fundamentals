#include <iostream>
#include "person.h"

int main()
{
    Person p1("Taylor", "Conners", 87);
    {
        Person p2;
    }
    std::cout << "after innermost block" << std::endl;
    std::string name = p1.getName();

    std::cout << name;

    return 0;
}