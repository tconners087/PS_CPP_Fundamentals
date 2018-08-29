#include "../Headers/person.h"
#include <iostream>
using std::cout;
using std::endl;

// or using namespace std;

// Constructor using initializer syntax
Person::Person(std::string first, std::string last, int arbitrary) :
    firstname(first), lastname(last), arbitrarynumber(arbitrary)
{
    cout << "constructing..." << 
        firstname << " " << lastname << endl;
}

Person::Person() : arbitrarynumber(0)
{
    cout << "constructing..." << 
        firstname << " " << lastname << endl;
}

Person::~Person()
{
    cout << "destructing..." << 
        firstname << " " << lastname << endl;
}

std::string Person::getName()
{
    return firstname + " " + lastname;
}