//
//  main.cpp
//  Fraction
//
//  Created by Hamkuu Shaw on 12/8/15.
//  Copyright © 2015 hamkuu. All rights reserved.
//

#include "Fraction.hpp"
#include <iostream>


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Begin\n";
    
    Fraction a = Fraction();// operand 1
 
    Fraction b = Fraction();// operand 2
    
    std::cout << "Please Input the 1st fraction: " << std::endl;
    
    std::cin >> a;
    std::cout << "Your Input = ";
    std::cout << a << std::endl;
    
    std::cout << "Please Input the 2nd fraction: " << std::endl;
    
    std::cin >> b;
    std::cout << "Your Input = ";
    std::cout << b << std::endl;
    
    std::cout << "Choose operation: (input number)" << std::endl;
    std::cout << "1 : addition(+)" << std::endl;
    std::cout << "2 : substraction(-)" << std::endl;
    std::cout << "3 : multiplication(*)" << std::endl;
    std::cout << "4 : division(/)" << std::endl;
    
    int choice;
    
    std::cin >> choice;
    
    Fraction cal_result;
    
    switch (choice) {
        case 1:
            std::cout << "Addtion(+)" << std::endl;
            cal_result = a + b;
            break;
        case 2:
            std::cout << "Substract(-)" << std::endl;
            cal_result = a - b;
            break;
        case 3:
            std::cout << "Multiple(*)" << std::endl;
            cal_result = a * b;
            break;
        case 4:
            std::cout << "Divide(/)" << std::endl;
            cal_result = a / b;
            break;
        default:
            std::cout << "Invalid Choice" << std::endl;
            break;
    }
    
    
    std::cout << "Calculation Result = " << cal_result << std::endl;
    
    
    
    return 0;
}
