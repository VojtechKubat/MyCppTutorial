//
//  Triangle.hpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 26/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#ifndef Triangle_hpp
#define Triangle_hpp

#include <stdio.h>
#include "Shape.hpp"

class Triangle: public Shape {
public:
    Triangle(int x = 10, int y = 10): Shape(x, y){};
    int area();
};

#endif /* Triangle_hpp */
