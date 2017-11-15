//
//  Box.hpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 22/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#ifndef TutorialsPointBox_hpp
#define TutorialsPointBox_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

namespace TutorialsPoint {
    const int SIZE = 10;
    
    class Box {
    private:
        int items[SIZE];
        
        void doSomethingPrivate();
        
    protected:
        void doSomethingProtected();
        
    public:
        static int objectCount;
        
        // default constructor
        Box(double l = 1, double b = 1, double h = 1):
        length(l),
        breadth(b),
        height(h){
            std::cout << "Box created - " << l << " x " << b << " x " << h << std::endl;
            objectCount++;
        };
        
        double length;
        double breadth;
        double height;
        
        double volume();
        double area();
        void doSomething();
        int compare(Box box);
        static int getCount();
        
        // override subscript [] operator
        int &operator[](int i);
//        int &operator[](int i) {
//            if (i > SIZE) {
//                cout << "Index out of bounds" << endl;
//                return items[0];
//            }
//            return items[i];
//        };
        
    };
}

#endif /* TutorialsPointBox_hpp */
