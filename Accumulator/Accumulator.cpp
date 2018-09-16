#include <string>
#include <iostream>
#include "Accum.h"

int main(){
    Accum<int> integers(0);
    integers+=3;
    integers+=7;
    std::cout << integers.GetTotal() << std::endl;
    return 0;
}