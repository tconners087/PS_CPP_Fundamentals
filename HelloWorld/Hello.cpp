#include <iostream>
#include <string>

int main()
{
    std::cout << "Type your name" << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << std::endl;

    auto a1 = 1;
    auto a2 = 2.2;

    std::cout << a1 << std::endl;
    std::cout << a2 << std::endl;

    a1 = static_cast<int>(a2);
    
    std::cout << a1 << std::endl;

    return 0;
}