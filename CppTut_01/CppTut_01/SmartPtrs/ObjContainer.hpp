//
//  ObjContainer.hpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 26/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#ifndef ObjContainer_hpp
#define ObjContainer_hpp

#include <stdio.h>
#include <vector>

#include "Obj.hpp"

using namespace std;

class ObjContainer {
    vector<Obj*> a;
    
public:
//    vector<Obj*> a;
    void add(Obj * obj);
    friend class SmartPointer;
};

#endif /* ObjContainer_hpp */
