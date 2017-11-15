//
//  ColoredBox.cpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 24/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#include "ColoredBox.hpp"

using namespace TutorialsPoint;

void ColoredBox::setColor(string nColor) {
    color = nColor;
    doSomethingProtected();
}

string ColoredBox::getColor() {
    return color;
}

