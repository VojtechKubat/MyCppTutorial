//
//  Line.cpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 22/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#include "Line.hpp"

#include <iostream>

using namespace std;

Line::Line(int len) {
    cout << "Line - using standard constructor - allocating memor for pLength" << endl;
    
    pLength = new int;
    *pLength = len;
    
    label = new string;
}

Line::Line(const Line &obj) {
    cout << "Line - copy constructor called - allocating memory for pLength copy" << endl;
    
    pLength = new int;
    *pLength = *obj.pLength;
    
    label = new string;
    *label = *obj.label;
}

Line::~Line() {
    cout << "Line - destructor called - freeing memory of pLength" << endl;
    
    delete pLength;
    delete label;
}

void fFunction(const Line &input) {            // friend function has access to all private and protected members of the class
    cout << input.pLength << " - Label of the provided Line = " << *input.label << endl;
    
}

void overrideLabel(Line &input, string nLabel) {
//    if (nullptr != input.label) {
//        delete input.label;
//    }
//    input.label = new string(nLabel);
    
    *input.label = nLabel;

    cout << "override function - " << &input << endl;
}

void Line::showInlineFunc() {
    double a = 12.3;
    double b = 3.14;
    
    cout << "The bigger of two = " << bigger(a, b) << endl;
}

// inline directive tells compiler to replace calls of the method with the method itself
//  - faster execution
//  - bigger executable files
//  - compiler can ignore the inline directive
inline double Line::bigger(double a, double b) {
    return a > b ? a : b;
}
