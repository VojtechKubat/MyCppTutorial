//
//  Weight.hpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 24/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#ifndef Weight_hpp
#define Weight_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Weight {
private:
    int kilograms;
public:
//    void setKilograms(int k) const;   // const member function cannot change any non-static data of the object
    void setKilograms(int k);
    void print();
    
    Weight operator+(const Weight w);
    
    // unary operator overloaded; negates the weight value
    Weight operator-();
    
    bool operator<(Weight w);
    
    // input/output operators   -    overload << and >> as friends (so that it can access the private variables with the stream be passed in by references
    // output
    friend ostream &operator<<(ostream &output, const Weight &w);
    // input
    friend istream &operator>>(istream &input, Weight &w);
    
    // prefix operator
    Weight operator++ ();
    // postifx operator
    Weight operator++ (int);
};


#endif /* Weight_hpp */
