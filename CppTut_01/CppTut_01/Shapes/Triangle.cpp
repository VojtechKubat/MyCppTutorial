//
//  Triangle.cpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 26/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#include "Triangle.hpp"
#include <iostream>

using namespace std;

int Triangle::area() {
    int result = height * width / 2;
    cout << "Triangle area = " << result << endl;
    return result;
}
