//
//  ColoredBox.hpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 24/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#ifndef ColoredBox_hpp
#define ColoredBox_hpp

#include <stdio.h>
#include "Box.hpp"
#include "PaintCost.hpp"

using namespace std;

namespace TutorialsPoint {    
    class ColoredBox: public Box, public PaintCost {
    public:
        
        ColoredBox(double x = 1, double y = 1, double z = 1, string col = "undefined"):
        Box(x, y, z),
        color(col){
            cout << "Colored box created - used color = " << col << endl;
        }
        
        string color;
        
        void setColor(string nColor);
        string getColor();
    };
}

#endif /* ColoredBox_hpp */
