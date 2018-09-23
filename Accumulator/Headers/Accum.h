#pragma once
//#include ".../ClassesAndObjects/Headers/person.h"
#include "/home/student/CPP_PS/PS_CPP_Fundamentals/ClassesAndObjects/Headers/person.h"

template <class T>
class Accum
{
    private:
        T total;
    public:
        Accum(T start) : total(start) {}; //empty constructor
        T operator+=(T const& t){return total = total + t;};
        T GetTotal() const {return total;}
};

//Template Specialization
template <>
class Accum<Person>
{
    private:
        int total;
    public:
        Accum(int start) : total(start) {}; //empty constructor
        int operator+=(Person const& t){return total = total + t.GetNumber();};
        int GetTotal() const {return total;}
};