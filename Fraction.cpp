//
//  Fraction.cpp
//  Fraction
//
//  Created by Hamkuu Shaw on 12/9/15.
//  Copyright © 2015 hamkuu. All rights reserved.
//

#include "Fraction.hpp"

int Fraction::GCD(int x, int y) {
    if (y == 0) {
        return x;
    } else {
        return GCD (y, x % y);
    }
}

Fraction::Fraction () {
    nominator = NULL;
    denominator = NULL;
}

Fraction::Fraction (int num) {
    nominator = num;
    denominator = 1;
}

Fraction::Fraction (int num_1, int num_2) {
    int divisor = Fraction::GCD (num_1, num_2);
    nominator = num_1 / divisor;
    denominator = num_2 / divisor;
}

Fraction & Fraction::operator = (const Fraction &A) {
    nominator = A.nominator;
    denominator = A.denominator;
    return *this;
}

Fraction operator + (const Fraction &A, const Fraction &B) {
    int nominator = A.nominator * B.denominator + B.nominator * A.denominator;
    int denominator = A.denominator * B.denominator;
    int divisor = Fraction::GCD (nominator, denominator);
    return Fraction (nominator / divisor, denominator / divisor);
}

Fraction operator - (const Fraction &A, const Fraction &B) {
    int nominator = A.nominator * B.denominator - B.nominator * A.denominator;
    int denominator = A.denominator * B.denominator;
    int divisor = Fraction::GCD (nominator, denominator);
    return Fraction (nominator / divisor, denominator / divisor);
}

Fraction operator * (const Fraction &A, const Fraction &B) {
    int nominator = A.nominator * B.nominator;
    int denominator = A.denominator * B.denominator;
    int divisor = Fraction::GCD (nominator, denominator);
    return Fraction (nominator / divisor, denominator / divisor);
}

Fraction operator / (const Fraction &A, const Fraction &B) {
    int nominator = A.nominator * B.denominator;
    int denominator = A.denominator * B.nominator;
    int divisor = Fraction::GCD (nominator, denominator);
    return Fraction (nominator / divisor, denominator / divisor);
}

std::ostream & operator << (std::ostream &output, Fraction &A) {
    output << A.nominator;
    if (A.denominator != 1) {
        output << "/" << A.denominator;
    }
    return output;
}

std::istream & operator >> (std::istream &input, Fraction &A) {
    std::cout << "nominator = ";
    std::cin >> A.nominator;
    std::cout << "denominator = ";
    std::cin >> A.denominator;
    
    // normalize Fraction:
    int divisor = Fraction::GCD(A.nominator, A.denominator);
    A.nominator /= divisor;
    A.denominator /= divisor;
    
    return input;
}


