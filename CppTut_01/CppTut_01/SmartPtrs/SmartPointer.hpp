//
//  SmartPointer.hpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 26/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#ifndef SmartPointer_hpp
#define SmartPointer_hpp

#include <stdio.h>

#include "ObjContainer.hpp"
#include "Obj.hpp"

class SmartPointer {
    ObjContainer oc;
    int index;
    
public:
    SmartPointer(ObjContainer& objc);
    
    bool operator++();          // prefix version
    bool operator++(int i);     // postfix version
    Obj* operator ->() const;   // overload -> operator
};

#endif /* SmartPointer_hpp */
