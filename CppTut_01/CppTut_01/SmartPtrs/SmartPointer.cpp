//
//  SmartPointer.cpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 26/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#include "SmartPointer.hpp"
#include <iostream>

using namespace std;

SmartPointer::SmartPointer(ObjContainer& objc) {
    oc =  objc;
    index = 0;
}

// Return value indicates end of list:
bool SmartPointer::operator++() {     // prefix version
    if (index >= oc.a.size()) return false;
    index++;
    if (oc.a[index] == 0) return false;
    return true;
}

bool SmartPointer::operator++(int i) {  // postfix version
    return operator++();
}

// overload operator->
Obj* SmartPointer::operator ->() const {
    if (!oc.a[index]) {
        cout << "Zero value" << endl;
        return (Obj*)0;
    }
    return oc.a[index];
}
