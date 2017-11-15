//
//  Dynamic.cpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 28/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#include "Dynamic.hpp"

#include <iostream>

using namespace std;

void Dynamic::testDynamic() {
    double* pvalue = NULL;      // Pointer initialized with null
//    pvalue = new double;        // Request memory for the variable
    
    if (!(pvalue = new double)) {
        cerr << "ERROR: Out of memory." << endl;
        exit(1);
    }
    
    *pvalue = 3.14;
    cout << "Allocated double - " << pvalue << " - value = " << *pvalue << endl;
    delete pvalue;
}
