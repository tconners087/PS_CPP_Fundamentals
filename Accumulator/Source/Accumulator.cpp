#include <string>
#include <iostream>
#include "../Headers/Accum.h"
#include "/home/student/CPP_PS/PS_CPP_Fundamentals/ClassesAndObjects/Headers/person.h"

int main(){
    Accum<int> integers(0);
    integers+=3;
    integers+=7;
    std::cout << integers.GetTotal() << std::endl;

    //Template Specialization
    Accum<Person> people(0);
    Person p1("Taylor", "Conners", 123);
    Person p2("Someone", "Else", 423);
    people += p1;
    people += p2;
    std::cout << people.GetTotal() << std::endl;
    return 0;
}