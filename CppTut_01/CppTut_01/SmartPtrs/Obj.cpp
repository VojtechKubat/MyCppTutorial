//
//  Obj.cpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 26/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#include "Obj.hpp"
#include <iostream>

using namespace std;

int Obj::i = 10;
int Obj::j = 1000;

void Obj::f() {
    cout << i++ << endl;
}

void Obj::g() {
    cout << j++ << endl;
}
