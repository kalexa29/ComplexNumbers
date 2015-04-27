//
//  Complex.cpp
//  complexNumbers
//
//  Created by Katelynn Alexander on 3/30/15.
//  Copyright (c) 2015 csci372. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include "Complex.h"
#include <fstream>

//default constructor
Complex::Complex(){
    a = 0;
    b = 0;
}

//constructor
Complex::Complex(double a, double b){
    this->a = a;
    this->b = b;
}

//copy constructor
Complex::Complex(const Complex& orig){
    a = orig.a;
    b = orig.b;
}

//getReal
double Complex::getReal(){
    return a;
}

//getImaginary
double Complex::getImaginary(){
    return b;
}

Complex Complex::operator+(const Complex &other){
    Complex result;
    result.a = a + other.a;
    result.b = b + other.b;
    return result;
}

Complex Complex::operator-(const Complex &other){
    Complex result;
    result.a = a - other.a;
    result.b = b - other.b;
    return result;
}

Complex Complex::operator/(const Complex &other) {
    Complex result;
    return result;
}


Complex Complex::operator*(const Complex &other){
    Complex result;
    result.a = a * other.a - b * other.b;
    result.b = b * other.b + a * other.a - 1;
    return result;
}
//
//Complex Complex::operator/(const Complex &other){
//    Complex result;
//    result.a = (a * other.a + b * other.b)/(other.a*other.a _ other.b * other.b);
//result.b = (b * other.a - a * other.b)/(other.a*other.a + other.b*other.b);
//    return result;
//}

Complex::~Complex(){
}

//friend
std::ostream &operator<<(std::ostream &output, const Complex &op){
    std::cout << op.a << " + " << op.b << "i";
    return output;
}
