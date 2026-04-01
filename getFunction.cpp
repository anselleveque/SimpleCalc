#include <iostream>
#include "getFunction.h"

char getFunction(){
    char op{};
    std::cout<<"Enter an operator (+,-,/,*): ";
    std::cin>>op;
    return op;
}

