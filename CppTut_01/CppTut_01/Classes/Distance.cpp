//
//  Distance.cpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 25/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#include "Distance.hpp"

using namespace TutorialsPoint;
using namespace std;

Distance::Distance(const Distance &obj) {
    cout << "Distance - copy constructor used" << endl;
}

void Distance::print() {
    cout << *this;
}

void Distance::operator = (const Distance &d) {
    cout << "assign operator used" << endl;
    m = d.m;
    cm = d.cm;
}

// just adds some values, when () operator is called on an instance of Distance object
Distance Distance::operator()(int mm, int ccmm) {
    cout << "Distance - overloaded () operator called" << endl;
    
    Distance d;
    d.m = this->m + mm;
    d.cm = this->cm + ccmm;
    
    return d;
}

// non-member function must be in respective namespace
namespace TutorialsPoint {
    ostream &operator<<(ostream &output, const Distance &d) {
        output << "Distance = " << d.m << "m, " << d.cm << "cm" << endl;
        return output;
    }
}
