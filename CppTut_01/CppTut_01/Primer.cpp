//
//  Primer.cpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 17/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#include "Primer.hpp"
#include <iostream>
using namespace std;

void Primer::testStrings() {
    char blbost[5] = {'a','a','a','a','a'}; // !!! not a string - string hast to end with /0 char
    cout << blbost << endl;                 // will print memory even after the last element of the array, until a zero appears
}

void Primer::arrays() {
    
    cout << "arr" << endl;
    short arr[10] = {0};       // all of the elements will be 0; without the initialization of the first (or more) elements, it would be random
    for (int i = 0; i < (sizeof(arr)/sizeof(short)); i++) {
        cout << i << ". element = " << arr[i] << endl;
    }
    cout << "-----------------------------------" << endl;
    cout << "arrRand" << endl;
    short arrRand[10];         // no init -> random things from memory
    for (int i = 0; i < (sizeof(arrRand)/sizeof(short)); i++) {
        cout << i << ". element = " << arrRand[i] << endl;
    }
    
}
