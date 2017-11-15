//
//  Shape.hpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 26/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#ifndef Shape_hpp
#define Shape_hpp

#include <stdio.h>

class Shape {
protected:
    int width, height;
    
public:
    Shape(int x = 0, int y = 0):
    width(x),
    height(y){};
    
//    virtual int area();
    virtual int area() = 0;         // the 0 indicates, this is "pure virtual function", which cannot be called
                                    // also, the 0 makes this class abstract -> derivated classes must override these pure virtual methodt to become a not-abstract	
    
    void doSomething();             // even an abstract class (with at least one pure virtual function) can have regular functions, or just virtual functions, which
                                    // does not need to be overriden
};

#endif /* Shape_hpp */
