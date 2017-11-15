//
//  Widget.cpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 29/09/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#include "Widget.hpp"
#include "utils.h"

using namespace std;

namespace Tut01 {
    
    double const Widget::AspectRatio = 0.3213;  // definition of static class constant (that is not defined in header)
                                                // REQUIRED for the constants declared in header !!!
//    Box const Widget::sConstBox = Box();
    
    Widget::Widget(const string justString) {
        x = 999;
        b = false;
        label = justString;
        cout << "justX constructor was used" << endl;
    }
    
    Widget::~Widget() {
        cout << "Widget destructor was called" << endl;
    }
    
    void Widget::doSomething() {
        cout << "x = " << x << endl;
        cout << "AspectRatio = " << AspectRatio << endl;
        cout << "Author = " << Author << endl;
    }
    
    void Widget::pointerExamples() {
        string sHello = "Hello";
        string sGoodbye = "Goodbye";
        
        cout << "sHello address   = " << &sHello << " = " << sHello << endl;
        cout << "sGoodbye address = " << &sGoodbye << " = " << sGoodbye << endl;
        cout << "---------------------" << endl;
        cout << "string * pStr = &sHello;" << endl;
        string * pStr = &sHello;
        cout << "---------------------" << endl;
        cout << "address of pStr pointer                    " << &pStr << endl;
        cout << "address of the object, pStr is pointing to " << pStr << endl;
        cout << "non constant pointer, non constant data - *pStr = " << *pStr << endl;
        cout << "pStr = " << pStr << endl;
        cout << "---------------------" << endl;
        cout << "pStr = &sGoodbye;" << endl;
        pStr = &sGoodbye;
        cout << "---------------------" << endl;
        cout << "address of pStr pointer                    " << &pStr << endl;
        cout << "address of the object, pStr is pointing to " << pStr << endl;
        cout << "non constant pointer, non constant data - *pStr = " << *pStr << endl;
        cout << "pStr = " << pStr << endl;
        cout << "---------------------" << endl;
        *pStr = "bla bla";
        cout << "*pStr = \"bla bla\";" << endl;
        cout << "---------------------" << endl;
        cout << "non constant pointer, non constant data - *pStr = " << *pStr << endl;
        cout << "pStr = " << pStr << endl;
        cout << "---------------------" << endl;
        
        cout << "sHello address   = " << &sHello << " = " << sHello << endl;
        cout << "sGoodbye address = " << &sGoodbye << " = " << sGoodbye << endl;
        
//        const string * cpStr = &sHello;
//        cout << "---------------------" << endl;
//        cout << "non constant pointer, non constant data - *pStr = " << *cpStr << endl;
//        cout << "pStr = " << cpStr << endl;
//
//        cout << "---------------------" << endl;
//        cout << "non constant pointer, non constant data - *pStr = " << *cpStr << endl;
//        cout << "pStr = " << cpStr << endl;
//        cout << "---------------------" << endl;

    }
    
    void Widget::testMacro() {
        int a = 3;
        int b = 10;
//        CALL_WITH_MAX(a, ++b, func);    // incremented twice because of the macro evaluation
        CALL_WITH_MAX(a, b, func);      // better solutio
    }
    
    void Widget::pointersAndConstants() {
        char greeting[] = "Hello";
        char goodbye[] = "Goodbye";
        
        char *P_Char = greeting;                // non-constant pointer
                                                // non-constant data
        
        const char *P_constChar = greeting;     // non-constant pointer
                                                // constant data
        
        char * const constP_Char = greeting;    // constant pointer
                                                // non-constant data
        
        const char * const constP_constChar = greeting;     // constant pointer
                                                            // constant data
        
    }
    
    // template inline function
    // this is rel function in compare to macro
    // A) obeys scope and access rules
    // B) it is good to make it private for a class
    // both of these are not possible with a macro
    template<typename T>
    inline void callWithMax(const T&a, const T&b, const void (* function)(T param)) {
                                                // it is better to define type of the function for better readability
                                                // but it is not possible to do it with template, so this solution
                                                // is good for teplated functions
        function(a > b ? a : b);
    }
    
    typedef void (* oneIntFunction)(int arg);   // define type of a function call
    
    void Widget::func(int a) {
        cout << "Called with max = " << a << endl;
    }
    
    void Widget::printDescription() {
        cout << "label = " << label << "; number = " << x << endl;
    }
}
