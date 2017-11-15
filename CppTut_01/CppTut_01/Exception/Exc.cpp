//
//  Exc.cpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 28/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#include "Exc.hpp"

#include <string>
#include <iostream>
#include <vector>

#include <exception>

#include "MyExcpetion.cpp"

using namespace std;

void decrease(int& number) {
    if (number > INT_MIN) {
        number--;
    } else {
//        throw underflow_error("int underflowed");
        throw MyException();
    }
}

void Exc::testExcpetions() {
    try {
        cout << "divide: 5/3= " << division(5, 3) << endl;
        cout << "divide: 5/0= " << division(5, 0) << endl;
    } catch (const char* excMsg) {
        cerr << excMsg << endl;
    }
}

double Exc::division(int a, int b) {
    if (b == 0) {
        throw "Division by zero exception!";
    }
    
    return a/b;
}

void Exc::testStandardExceptions() {
//    int arr[10] = {10,148};
//    vector<int> vec;
//    try {
//        for (int i = 0; i < 12; i++) {
//            cout << "arr[" << i << "] = " << arr[i] << endl;  // does not throw exception - it prints some data from memobry based on pointer arithmetic
//        }
//    } catch (exception& exc1) {
//        cerr << "Exception!!!" << endl;
//    }
    
    
//    vec.push_back(10);
//    vec.push_back(148);
//    try {
//        for (int i = 0; i < vec.size()+10; i++) {
//            cout << "vector[" << i << "] = " << vec[i] << endl;       // does not throw exception - it prints some data from memobry based on pointer arithmetic
//        }
//    } catch (exception exc1) {
//        cerr << "Exception !!!" << endl;
//    }
    
    int min = INT_MIN + 2;
    try {
        for (int i = 0; i < 10; i++) {
            cout << i << " = " << min << endl;
            decrease(min);
        }
    } catch (underflow_error &exc) {
        cerr << "UNDERFLOW ERRROR - " << exc.what() << endl;
    } catch (exception &exc) {
        cerr << "Exception !!! - " << exc.what() << endl;
    }
}


