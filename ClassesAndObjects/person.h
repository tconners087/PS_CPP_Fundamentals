#pragma once
#include <string>

class Person
{
    private:
        std::string firstname;
        std::string lastname;
        int arbitrarynumber;

    public:
        // Constructor Declaration
        Person(std::string first, std::string last, int arbitrary);
        Person();

        // Default Constructor declaration
        // Person() = default;

        // Destructor Declaration
        ~Person();

        // Public Functions (implemented in person.cpp)
        std::string getName();
        
};