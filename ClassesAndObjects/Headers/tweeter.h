#pragma once
#include "person.h"
#include <string>

// Tweeter inherits from Person
class Tweeter : 
    public Person
{
private:
    std::string twitterhandle;
public:
    Tweeter(std::string first, std::string last, int arbitrary, std::string handle);
    ~Tweeter();
};