//
//  Line.hpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 22/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#ifndef Line_hpp
#define Line_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Line {
private:
    string *label;
    int *pLength;
    
public:
    Line(int len);          // simple constructor
    Line(const Line &obj);  // copy construcor
    ~Line();            // destructor
    
    friend void fFunction(const Line &input);
    friend void overrideLabel(Line &input, string nLabel);
    
    void showInlineFunc();
    inline double bigger(double a, double b);
};

#endif /* Line_hpp */
