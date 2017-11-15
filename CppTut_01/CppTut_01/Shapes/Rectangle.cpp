//
//  Rectangle.cpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 26/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#include "Rectangle.hpp"
#include <iostream>

using namespace std;

int Rectangle::area() {
    int result = height * width;
    cout << "Rectangle area = " << result << endl;
    return result;
}

