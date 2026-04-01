#include <iostream>
#include <iomanip> // for std::setprecision()
#include "getFunction.h"
#include "getNumber.h"

int main(){
    double result{};
    double num1{getNumber()};
    char operand{getFunction()};
    double num2{getNumber()};

   /* switch (operand){
        case '+':
            result=num1+num2;
            break;
        case '*':
            result=num1*num2;
            break;
        case '-':
            result=num1-num2;
            break;
        case '/':
            if (num2 !=0){
                result=num1/num2;
            }
            else{
                std::cout<<"Division by 0 error \n";
                return 1;
            }
            break;
        default:
            std::cout<<"Unknown operator! \n";
            return 1;
    }*/
        if (operand=='+'){
            result=num1+num2;
        }
        else if (operand=='-'){
            result=num1-num2;
        }
        else if(operand=='*'){
            result=num1*num2;
        }
        else if(operand=='/'){
            if (num2!=0){
                result=num1/num2;
            }
            else{
                std::cout<<"Divide by 0 error \n";
                return 1;
            }
        }
        else{
            std::cout<<"Unknown operator \n";
            return 1;
        }
    std::setprecision(15);
    std::cout<<"Result: "<<num1<<operand<<num2<<"="<<result<<'\n';
    return 0;
}
