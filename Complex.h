//
//  Complex.h
//  complexNumbers
//
//  Created by Katelynn Alexander on 3/30/15.
//  Copyright (c) 2015 csci372. All rights reserved.
//

#ifndef __complexNumbers__Complex__
#define __complexNumbers__Complex__

#include <stdio.h>

class Complex {
    
public:
    Complex();
    Complex(double a, double b);
    Complex(const Complex& orig);
    double getReal();
    double getImaginary();
    Complex operator+(const Complex &other);
    Complex operator-(const Complex &other);
    Complex operator/(const Complex &other);
    Complex operator*(const Complex &other);
    ~Complex();
    Complex conjugate(const Complex &other);
    friend std::ostream &operator<<(std::ostream &output, const Complex &op);
    
private:
    double a;
    double b;
};

#endif /* defined(__complexNumbers__Complex__) */