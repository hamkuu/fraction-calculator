//
//  main.cpp
//  Fraction
//
//  Created by Hamkuu Shaw on 12/8/15.
//  Copyright © 2015 hamkuu. All rights reserved.
//

#include "Fraction.hpp"
#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Begin\n";
    
    Fraction a = Fraction();// operand 1
 
    Fraction b = Fraction();// operand 2
    
    cout << "Please Input the 1st fraction: " << endl;
    
    cin >> a;
    cout << "Your Input = ";
    cout << a << endl;
    
    cout << "Please Input the 2nd fraction: " << endl;
    
    cin >> b;
    cout << "Your Input = ";
    cout << b << endl;
    
    cout << "Choose operation: (input number)" << endl;
    cout << "1 : addition(+)" << endl;
    cout << "2 : substraction(-)" << endl;
    cout << "3 : multiplication(*)" << endl;
    cout << "4 : division(/)" << endl;
    
    int choice;
    
    cin >> choice;
    
    Fraction cal_result;
    
    switch (choice) {
        case 1:
            cout << "Addtion(+)" << endl;
            cal_result = a + b;
            break;
        case 2:
            cout << "Substract(-)" << endl;
            cal_result = a - b;
            break;
        case 3:
            cout << "Multiple(*)" << endl;
            cal_result = a * b;
            break;
        case 4:
            cout << "Divide(/)" << endl;
            cal_result = a / b;
            break;
        default:
            cout << "Invalid Choice" << endl;
            break;
    }
    
    
    cout << "Calculation Result = " << cal_result << endl;
    
    
    
    return 0;
}
