//
//  Box.hpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 30/09/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#ifndef Tut01Box_hpp
#define Tut01Box_hpp

#include <stdio.h>
#include <string>
#include <iostream>

namespace Tut01 {
    class Box {
    public:
        std::string label;
        
        Box() {
            label = "n/a";
            std::cout << "default constructor - Box()\n";
        };
        Box(const Box& rhs) {
            std::cout << "copy constructor - Box(const Box& rhs)\n";
        };
//        Box& operator=(const Box& rhs);     // TODO copy assignment operator
    };
}

#endif /* Tut01Box_hpp */
