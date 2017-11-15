//
//  Box.cpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 22/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#include "Box.hpp"
#include <iostream>

using namespace std;
using namespace TutorialsPoint;

int TutorialsPoint::Box::objectCount = 0;       // redeclaring the static variable, now with definition ? initialization ?

// PRIVATE

void Box::doSomethingPrivate() {
    cout << "Box - PRIVATE doSomethingPrivate" << endl;
}

// PROTECTED

void Box::doSomethingProtected() {
    cout << "Box - PROTECTED doSomethingProtect" << endl;
}


// PUBLIC

double Box::volume() {
    return length * breadth * height;
}

double Box::area() {
    return (length*breadth + breadth*height + length*height)*2;
}

int Box::compare(Box box) {
    return this->volume() > box.volume();
}

int Box::getCount() {
    return objectCount;
}

int &Box::operator[](int i) {
    if (i > SIZE) {
        cout << "Index out of bounds" << endl;
        return items[0];
    }
    return items[i];
};
