//
//  Weight.cpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 24/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#include "Weight.hpp"
#include <iostream>

using namespace std;

void Weight::print() {
    cout << "Weight with " << kilograms << "kg" << endl;
}

//void Weight::setKilograms(int k) const {          // const member function cannot change any non-static data of the object
void Weight::setKilograms(int k) {
    kilograms = k;
}

Weight Weight::operator+(const Weight w) {
    Weight tmp;
    tmp.kilograms = this->kilograms + w.kilograms;
    return tmp;
}

Weight Weight::operator-() {
    cout << "Weight is negative now" << endl;
    kilograms = -kilograms;
    
    Weight tmp;
    tmp.kilograms = kilograms;
    return tmp;
}

bool Weight::operator<(Weight w) {
    return kilograms < w.kilograms;
}

ostream &operator<<(ostream &output, const Weight &w) {
    output << "Weight = " << w.kilograms << "kg";
    return output;
}

istream &operator>>(istream &input, Weight &w) {
    input >> w.kilograms >> w.kilograms;            // can get multiple inputs in a row
    return input;
}

// prefix operator
Weight Weight::operator++ () {
//    ++kilograms;
//    Weight tmp;
//    tmp.kilograms = kilograms;
//    return tmp;
    
    ++kilograms;
    return *this;
}

// postifx operator
Weight Weight::operator++ (int) {
    // create weight with the original value
    Weight tmp;
    tmp.kilograms = kilograms;
    
    // increment this object
    ++kilograms;
    
    // return the object with old value
    return tmp;
}
