#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
#include "../ClassesAndObjects/Headers/person.h"

template <class T>
T max_2(T const& t1, T const& t2)
{
    return t1 < t2? t2: t1;
}

int main() 
{
    cout << "max of 33 and 44 is " << max_2(33, 44) << endl;
    string s1 = "hello";
    string s2 = "world";
    cout << "max of " << s1 << " and " << s2 << " is " << max_2(s1, s2) << endl;
    Person p1("Taylor", "Conners", 4000);
    Person p2("Kate", "Gregory", 2000);
    cout << "max of " << p1.getName() << " and " << p2.getName() << " is " << max_2(p1, p2).getName() << endl;

    return 0;
}