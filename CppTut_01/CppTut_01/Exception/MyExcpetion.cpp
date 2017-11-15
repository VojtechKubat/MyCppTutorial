//
//  MyExcpetion.cpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 28/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#ifndef MyExcpetion_cpp
#define MyExcpetion_cpp

#include <stdio.h>
#include <exception>

using namespace std;

struct MyException: public exception {
    const char * what() const throw () {
        return "My C++ excpetion";
    }
    
    // const char* - this function returns a modifiable pointer to a constant (array of) char
    // what() - this function takes no parameters
    // const - this function does not modify the (non-mutable) members of the object on which it is called, and hence can be called on const instances of its class
    // throw() - this function is not expected to throw any exceptions. If it does, unexpected will be called.
};

#endif
