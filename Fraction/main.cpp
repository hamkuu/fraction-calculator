//
//  main.cpp
//  Fraction
//
//  Created by Hamkuu Shaw on 12/8/15.
//  Copyright © 2015 hamkuu. All rights reserved.
//


#include <iostream>
#include <stdio.h>

using namespace std;

class Fraction {
private:
    int nominator;
    int denominator;
public:
    Fraction (int);
    Fraction (int, int);
    //~Fraction();
    
    Fraction & operator = (Fraction &);
    
    friend Fraction operator + (Fraction &, Fraction&);
    
    friend Fraction operator - (Fraction &, Fraction&);
    
    friend Fraction operator * (Fraction &, Fraction&);
    
    friend Fraction operator / (Fraction &, Fraction&);
    
    friend ostream & operator << (ostream &output, Fraction &);
    
    // find the Greatest Commone Divisor of two numbers
    int static GCD(int x, int y) {
        if (y == 0) {
            return x;
        } else {
            return GCD (y, x % y);
        }
    }
    
};

Fraction::Fraction (int num_1, int num_2) {
    int divisor = Fraction::GCD (num_1, num_2);
    nominator = num_1 / divisor;
    denominator = num_2 / divisor;
}

Fraction & Fraction::operator=(Fraction &A) {
    nominator = A.nominator;
    denominator = A.denominator;
    return *this;
}

Fraction operator + (Fraction &A, Fraction &B) {
    int nominator = A.nominator * B.denominator + B.nominator * A.denominator;
    int denominator = A.denominator * B.denominator;
    int divisor = Fraction::GCD (nominator, denominator);
    return Fraction (nominator / divisor, denominator / divisor);
}

Fraction operator - (Fraction &A, Fraction &B) {
    int nominator = A.nominator * B.denominator - B.nominator * A.denominator;
    int denominator = A.denominator * B.denominator;
    int divisor = Fraction::GCD (nominator, denominator);
    return Fraction (nominator / divisor, denominator / divisor);
}

Fraction operator * (Fraction &A, Fraction &B) {
    int nominator = A.nominator * B.nominator;
    int denominator = A.denominator * B.denominator;
    int divisor = Fraction::GCD (nominator, denominator);
    return Fraction (nominator / divisor, denominator / divisor);
}

Fraction operator / (Fraction &A, Fraction &B) {
    int nominator = A.nominator * B.denominator;
    int denominator = A.denominator * B.nominator;
    int divisor = Fraction::GCD (nominator, denominator);
    return Fraction (nominator / divisor, denominator / divisor);
}

ostream & operator << (ostream &output, Fraction &A) {
    output << A.nominator;
    if (A.denominator != 1) {
        output << "/" << A.denominator;
    }
    
    return output;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Begin\n";
    
    Fraction a = Fraction (1, 4);
    Fraction b = Fraction (2, 5);
    
    Fraction c = a / b;
    
    cout << c << endl;
    
    
    return 0;
}
