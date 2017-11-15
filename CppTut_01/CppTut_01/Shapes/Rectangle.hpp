//
//  Rectangle.hpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 26/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>

#include "Shape.hpp"

class Rectangle: public Shape {
public:
    Rectangle(int x = 10, int y = 10): Shape(x, y){}
    int area();
};

#endif /* Rectangle_hpp */
