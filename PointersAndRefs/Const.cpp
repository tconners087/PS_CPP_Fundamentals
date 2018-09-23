#include <iostream>

int DoubleIt(int const& x) {
    return x * 2;
}

int main()
{
    int i = 3;
    int const ci = 3;
    i = 4;
    //ci = 4

    int& ri = i;
    ri = 5;

    int const & cri = i;
    //cri = 6; //can't do this, cri is const even though i isn't 

    //int& ncri = ci;

    int j = 10;
    int dj = DoubleIt(j);
    int dTen = DoubleIt(10);
    
    return 0;
}