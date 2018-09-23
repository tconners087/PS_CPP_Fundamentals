#include <iostream>
#include "/home/student/CPP_PS/PS_CPP_Fundamentals/ClassesAndObjects/Headers/person.h"

void printInt(int const& i) {
    printf("i is %i\n", i);
}

int main()
{
    int a = 3;
    std::cout << "a is " << a << std::endl;
    int& rA = a;
    std::cout << "a is " << a << std::endl;

    Person Taylor("Taylor", "Conners", 234);
    Person& rTaylor = Taylor;
    rTaylor.SetNumber(100);
    std::cout << "rTaylor: " << rTaylor.getName() << " " << rTaylor.GetNumber() << std::endl;

    int* pA = &a;
    *pA = 4;
    std::cout << "a is " << a << std::endl;
    int b = 100;
    pA = &b;
    (*pA)++;
    std::cout << "a " << a << ", *pA " << *pA << std::endl;

    Person* pTay = &Taylor;
    (*pTay).SetNumber(235);
    pTay->SetNumber(236);
    std::cout << "Taylor: " << Taylor.getName() << " " << Taylor.GetNumber() << std::endl;
    std::cout << "pTay: " << pTay->getName() << " " << pTay->GetNumber() << std::endl;

    //Always declare uninitialized pointers to point to nullptr.
    int* nullPointer = nullptr;
    //Check to see if a pointer is null before dereferencing or attempting to assign to its dereferenced value.
    if (nullPointer) {
        //Do something.
        //This won't execute because nullPointer == nullptr.
    }

    //printInt receives a as a reference
    printInt(a);

    int i = 1;
    int j = 2;

    int* pI = &i;
    //int* pII = &pI;
    //pI = &Taylor;

    int const * pcI = pI; // pointer to const
    //*pcI = 2;
    pcI = &j;
    j = *pcI;

    int * const cpI = pI; // const pointer
    *cpI = 4;
    //cpI = &j;

    int const * const crazy = pI; // const pointer to a const
    //*crazy = 4;
    //crazy = &j;
    j = *crazy;


    return 0;
}