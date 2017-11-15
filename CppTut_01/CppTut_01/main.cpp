//
//  main.cpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 29/09/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#include <iostream>
#include "Widget.hpp"

#include "Box.hpp"
#include "Classes/Box.hpp"
#include "Classes/ColoredBox.hpp"

#include "Primer.hpp"
#include "TutorialsPointMain.hpp"

#include "Classes/Line.hpp"

#include "Classes/Overloads.hpp"
#include "Classes/Weight.hpp"
#include "Classes/Distance.hpp"

#include "SmartPtrs/Obj.hpp"
#include "SmartPtrs/ObjContainer.hpp"
#include "SmartPtrs/SmartPointer.hpp"

#include "Shapes/Shape.hpp"
#include "Shapes/Rectangle.hpp"
#include "Shapes/Triangle.hpp"

#include "io/StandardIO.hpp"
#include "io/FStreams.hpp"

#include "Exception/Exc.hpp"

#include "Dynamic/Dynamic.hpp"

//void processWidget(Tut01::Widget input) {
//
//}

using namespace std;
using namespace TutorialsPoint;

//void display(Line inputLine) {
//    cout << "Line - Display" << " >>> " << *inputLine.pLength << " <<<" << endl;
//}

int main(int argc, const char * argv[]) {
    
//    TutorialsPoint::Box theBox;
//    Tut01::Box secondBox;
//    theBox.length = 4.15;
//    theBox.breadth = 2;
//    theBox.height = 5.65;
//    cout << "theBox volume now = " << theBox.volume() << endl;
    
//    Primer primer;
//    primer.testStrings();
//    primer.arrays();
    
//    TutorialsPointMain tutorialspoint;
//    tutorialspoint.nullPointers();
//    tutorialspoint.pointerArithmetic();
//    tutorialspoint.arrayOfPointers();
//    tutorialspoint.arrayOfPointersStrings();
//    tutorialspoint.pointerToPointer();
//    tutorialspoint.pointerAsFunctionParameter();
//    tutorialspoint.pArrayAsParameter();
//    tutorialspoint.pointerAsReturnType();
//    tutorialspoint.referenceExample();
//    tutorialspoint.callFuncAndPassReference();
//    tutorialspoint.referenceReturnedExample();
    
//    Tut01::Widget tmp;
//    tmp.doSomething();
//    tmp.testMacro();
//    tmp.pointerExamples();
    
    
//    std::cout << "static constant of class - double = " << Widget::AspectRatio << std::endl;
//    std::cout << "static constant of class - int  = " << Widget::sConstInClass << std::endl;
//    std::cout << "static constant of class - Box  = " << Widget::sConstBox.label << std::endl;
    
//    processWidget(10);
//    processWidget requires a Widget object, but explicit constructor forbids use it for conversion
//    processWidget(Tut01::Widget(10));
    
    
//    Box b1;      // invoke default constructor
//    Box b2(b1);  // invoke copy constructor
//    b1 = b2;            // invoke copy assignment operator
//    Box b3 = b1;        // invoke copy constructor !!!
    
//    Tut01::Widget tmp = Tut01::Widget("12");
//    Tut01::Widget tmp("Hello world");
//    Tut01::Widget tmp;
//    tmp.printDescription();

//    Line lineTmp(104);
//    cout << "basic object - " << &lineTmp << endl;
    
    // constructors
//    display(lineTmp);           // it is passed as a copy !!! - if the object allocates memory dinamically, it has to have a copy constructor,
//                                //                              otherwise the copy destructor can release some of the common memory and it will be
//                                //                              released again -> crash
//    Line lineTmpCopy = lineTmp; // also uses copy constructor
//    fFunction(lineTmp);                         // function pass it as a reference -> no copy is created
//    overrideLabel(lineTmp, "Hello world");
//    fFunction(lineTmp);

    // inline function
//    lineTmp.showInlineFunc();
    
//    Box tmpBox;
//    Box anotherBox(3, 2, 2.12);
//    cout << "comparing two boxes = " << anotherBox.compare(tmpBox) << endl;

    
    // pointer to an object
//    Box box1(1.5, 4, 1);
//    Box box2;
//
//    Box *pTmpBox = &box1;
//
//    cout << "Box1 volume = " << pTmpBox->volume() << endl;
//    pTmpBox = &box2;
//    cout << "Box2 volume = " << pTmpBox->volume() << endl;
//
//    cout << "Count of boxes = " << Box::getCount() << endl;

    
//    // inheritance
//    ColoredBox colBox(2, 2, 2, "Blue");
//
////    Box *pBox = &colBox;
//    ColoredBox *pColBox = &colBox;
//    pColBox->setColor("Red");
//
//    cout << "Volume of colored box = " << pColBox->volume() << " - color = " << pColBox->getColor() << endl;
//    cout << "Cost of paint = $" << pColBox->getCost(pColBox->area()) << endl;
    
    // overloads
    
//    Overloads ov;
//    ov.print(15);
//    ov.print(3.14);
//    ov.print("Hello world");

    // operator overloads
//    Weight w1;
//    Weight w2;
//    w1.setKilograms(150);
//    w2.setKilograms(266);
//    w1.kilograms = 150;
//    w2.kilograms = 266;
//    Weight w3 = w1+w2;
//
//    cout << "Composed weight = " << w3.kilograms << endl;
//
//    -w3;
//
//    cout << "Composed negated weight = " << w3.kilograms << endl;
//    bool isLighter = (w1 < w2);
//    cout << "w1 < w1 = " << isLighter << endl;
//    cout << w3 << endl;
//    cin >> w3;
//    cout << w3 << endl;

    // standard input stream
//    char name[50];
//    cout << "Type in your name:" << endl;
//    cin >> name;
//    cout << "Name is: " << name << endl;
//
//    // standard error stream
//    cerr << "Error message" << endl;
//
//    // standard log stream
//    clog << "standard log stream" << endl;

//    Weight w1;
//    w1.setKilograms(15);
//    w1.print();
//    w1++;
//    w1.print();
//    ++w1;
//    w1.print();
//    cout << w1;
    
    
//    // override assing operator
//    Distance d1(2, 31);
////    Distance d2 = d1;       // invoke copy constructor
//    Distance d2;            // invoke default constructor with default values
//    
//    cout << "d1 - " << d1;
//    d2 = d1;                // now this uses overridden assignment operator -> no copy constructor
//    cout << "d2 - " << d2;
////    d2.print();

//    // override () operator
//    Distance d1(3, 15);
//    Distance d2;
//    d2 = d1(1,15);
//
//    d1.print();
//    d2.print();
    
//    // override [] operator - subscripting
//    Box box1;
//    box1[0] = 5;
//    cout << box1[0] << endl;
    
    
//    // smart pointers ???
//    const int sz = 10;
//    Obj o[sz];
//    ObjContainer oc;
//    
//    for (int i = 0; i < sz; i++) {
//        oc.add(&o[i]);
//    }
//    
////    oc.a[5] = nullptr;
//    
//    SmartPointer sp(oc);    // create an iterator
//    do {
//        sp->f();
//        sp->g();
//    } while (sp++);
    
    
//    // polymorphism
//    Rectangle rec(10,15);
//    Triangle tri(10, 15);
//    rec.area();
//    tri.area();
//
//    cout << "------------------------" << endl;
//
//    Shape *shape;
//    shape = &rec;
//    shape->area();      // as a result of "static resolution" or "static linkage" or "early binding", the method of the base class is invoked
//                        // if the method in the base class is marked as "virtual", then "dynamic linkage" or "late binding" is used -> method of the derivated class is invoked
//    shape->doSomething();
//
//    shape = &tri;
//    shape->area();

//    Shape dummy;          // Shape is an abstract class - it cannot be instantiated (it happens because there is a "pure virtual function" in the Shape class)
//    shape = &dummy;
//    shape->area();

    // input/output
//    StandardIO io;
//    io.doSomething();
//
//    FStreams fstream;
//
//    fstream.writeToFile();
//
//    fstream.readFromFile();

    
    // exceptions
//    Exc test;
////    test.testExcpetions();
//    test.testStandardExceptions();
    
    Dynamic dyn;
    dyn.testDynamic();
    
    return 0;
}
