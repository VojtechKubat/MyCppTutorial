//
//  StandardIO.cpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 28/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#include "StandardIO.hpp"
#include <string>
#include <iostream>

using namespace std;

void StandardIO::doSomething() {
    string input1;
    string input2;
    
    cout << "Type in input1: ";
    cin >> input1;
    
    cout << "Type in input2: ";
    cin >> input2;
    
    cout << "input1 = " << input1 << endl;
    cout << "input2 = " << input2 << endl;
}
