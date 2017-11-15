//
//  Shape.cpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 26/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#include "Shape.hpp"
#include <iostream>

using namespace std;

// commented for pure virtual function
//int Shape::area() {
//    cout << "Parent class area called" << endl;
//    return 0;
//}

void Shape::doSomething() {
    cout << "Shape - doSomething()" << endl;
}
