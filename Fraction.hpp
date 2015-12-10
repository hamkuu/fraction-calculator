//
//  Fraction.hpp
//  Fraction
//
//  Created by Hamkuu Shaw on 12/9/15.
//  Copyright © 2015 hamkuu. All rights reserved.
//

#ifndef Fraction_hpp
#define Fraction_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Fraction {
private:
    int nominator;
    int denominator;
public:
    Fraction ();
    Fraction (int);
    Fraction (int, int);
    //~Fraction();
    
    Fraction & operator = (const Fraction &);
    
    friend Fraction operator + (const Fraction &, const Fraction &);
    
    friend Fraction operator - (const Fraction &, const Fraction &);
    
    friend Fraction operator * (const Fraction &, const Fraction &);
    
    friend Fraction operator / (const Fraction &, const Fraction &);
    
    friend ostream & operator << (ostream &output, Fraction &);
    
    friend istream & operator >> (istream &input, Fraction &);
    
    // static function:
    // find the Greatest Common Divisor of two numbers
    int static GCD(int x, int y);
    
};

#endif /* Fraction_hpp */
