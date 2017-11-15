//
//  Widget.hpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 29/09/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#ifndef Widget_hpp
#define Widget_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "Box.hpp"

using namespace std;

namespace Tut01 {
    
    static const std::string Author("Vojtech Kubat");       // not a class const - just a const in the namespace
    
    class Widget {
    private:
        int x;
        bool b;
        std::string label;
        void func(int a);
        
    public:
        /*
         *  this is a default constructor
         *   - it has defined default value for every parameter (not all properties necessary)
         *   - explicit - it prevent from being used to perform implicit type conversion
         */
        explicit Widget(const int xx = 0, const bool bb = false):
            x(xx),
            b(bb){
                std::cout << "Default constructor called \n";
                label = "Not defined";
            };
        
        explicit Widget(const string justString);
        ~Widget();
        
        static const double AspectRatio;            // declaration of static class constants
        static const int sConstInClass = 128/2;
        static const int sConstInt = 5;
        static const Box sConstBox;
        
        
        // enum hack - equivalent of static class constant, but it work more like #define
        enum { countOfItems = 12 };
        int scoresHacked [countOfItems];
    
        int scores[sConstInt];
        
        void doSomething();
        void pointerExamples();
        void testMacro();
        void pointersAndConstants();
        void printDescription();
    };
}

#endif /* Widget_hpp */
