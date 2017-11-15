//
//  Overloads.cpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 24/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#include "Overloads.hpp"
#include <iostream>

using namespace std;

void Overloads::print(int i) {
    cout << "Printi int = " << i << endl;
}

void Overloads::print(double d) {
    cout << "Printi double = " << d << endl;
}

void Overloads::print(char* c) {
    cout << "Printi char = " << c << endl;
}
