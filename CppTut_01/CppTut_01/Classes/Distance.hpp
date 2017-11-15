//
//  Distance.hpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 25/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#ifndef Distance_hpp
#define Distance_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

namespace TutorialsPoint {
    class Distance {
    
    private:
        int cm;
        int m;
        
    public:
        Distance(int meters = 1, int centim = 1):
        m(meters),
        cm(centim)
        {
            cout << "Distance - default constructor used" << endl;
        };
        
        Distance(const Distance &obj);  // copy construcor
        
        void print();
        
        // override output stream operator
        friend ostream &operator<<(ostream &output, const Distance &d);
        
        // override assign operator
        void operator = (const Distance &d);
        
        
        // override () operator
        Distance operator()(int mm, int ccmm);
    };
}

#endif /* Distance_hpp */
