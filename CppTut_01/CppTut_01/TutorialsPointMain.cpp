//
//  TutorialsPointMain.cpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 17/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#include "TutorialsPointMain.hpp"
#include <iostream>

using namespace std;

void TutorialsPointMain::nullPointers() {
    int *variable = nullptr;
    
    cout << "int pointer - variable   = " << variable << endl;
//    cout << "value of the int pointer = " << *variable << endl;         // causes bad access exception -> crash
    
    if (variable) {
        cout << "variable is not null pointer" << endl;
    } else {
        cout << "variable is nullptr" << endl;
    }
    
    cout << "--------------------------------------" << endl;
    
    int *uninit;       // uninitialized pointer, can be nullptr, but it is not guaranteed
    
    cout << "unit pointer points to address = " << uninit << endl;
//    cout << "it points to value             = " << *uninit << endl;         // can easily crash
    
    if (uninit) {
        cout << "uninit is not null pointer, but nobody initialized it" << endl;
    } else {
        cout << "uninit is nullptr" << endl;
    }
}

void TutorialsPointMain::pointerArithmetic() {
    const int MAX = 5;
    int arr[MAX] = {2, 4, 6};
    
    int *ptr;
    ptr = arr;      // set pointer to the array address (first item of the array)
    
    int *third = &arr[2];
    
    cout << "--------------------------------------------------" << endl;
    for (int i = 0; i < MAX; i++) {
        cout << i << ". character of array is '" << *ptr << "'" << endl;
        cout << i << ". element of array address is '" << ptr << "'" << endl;
        if (ptr == third) {
            cout << "This element was picked as the third one" << endl;
        }
        cout << "--------------------------------------------------" << endl;
        
        *ptr = (1 + *ptr * i);
        
        ptr++;
    }
    
    
    
    cout << "----------------- second walkthrough -----------------" << endl;
    ptr = arr;
    
    *(ptr + 3) = 404;       // pointer arithmetic - pointer plus 3 'units' - the 'unit' is defined by its type
    
    for (int i = 0; i < MAX; i++) {
        cout << i << ". character of array is '" << *ptr << "'" << endl;
        cout << i << ". element of array address is '" << ptr << "'" << endl;
        if (ptr == third) {
            cout << "This element was picked as the third one" << endl;
        }
        cout << "--------------------------------------------------" << endl;
        
        ptr++;
    }
}

void TutorialsPointMain::arrayOfPointers() {
    const int MAX = 5;
    
    int var[MAX] = { 5, 10, 412 };
    int *ptr[MAX] = {nullptr};      // array of pointers
                                    // without initialization, it would be some unknown data from memory
    
    for (int i = 0; i < MAX; i++) {
        cout << i << ". address, pointer is pointing to = " << ptr[i] << endl;
    }
    cout << "--------------------------------------------------" << endl;
    
    for (int i = 0; i < MAX; i++) {
        ptr[i] = &var[i];
    }
    
    cout << "--------------------------------------------------" << endl;
    for (int i = 0; i < MAX; i++) {
        cout << i << ". address, pointer is pointing to = " << ptr[i];
        cout << " = " << *ptr[i] << endl;
    }
}

void TutorialsPointMain::arrayOfPointersStrings() {
    const int MAX = 3;
    char *arrayOfStrings[MAX] = {"Hello", "World", "bla bla bla"};          // it will crash, if there is any element not defined
    
    for (int i = 0; i < MAX; i++) {
        cout << i << ". address, pointer is pointing to = " << &arrayOfStrings[i];
        cout << " = " << arrayOfStrings[i] << endl;
    }
}

void TutorialsPointMain::pointerToPointer() {
    int realInt = 42;
    int *ptrInt = &realInt;         // take adress of the int variable
    int **ptrToPtrInt = &ptrInt;    // take adress of the pointer to int
    
    cout << "original int = " << realInt << endl;
    cout << "pointer to the int = " << *ptrInt << endl;
    cout << "pointer to the pointer to the int = " << **ptrToPtrInt << endl;
}

void getSeconds(unsigned long *parameter) {
    *parameter = time(NULL);
}

void TutorialsPointMain::pointerAsFunctionParameter() {
    unsigned long seconds;
    
    getSeconds(&seconds);
    
    cout << "Count of seconds = " << seconds << endl;
}

void listWholeArray(const int *pArray, int size) {
    for (int i = 0; i < size; i++) {
        cout << i << ". element = " << pArray[i] << endl;
//        pArray[i]++;              // cannot be performed because of the "const" before the parameter
    }
    cout << "-----------------------" << endl;
}

void TutorialsPointMain::pArrayAsParameter() {
    int arr[4] = { 10, 125 };
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout << "size of the array is " << size << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
  
    cout << "-----------------------" << endl;
    
    listWholeArray(arr, size);
    listWholeArray(arr, size);
}

int *pCountOfSomething() {
    static int counter = 0;
    counter++;
    return &counter;
}

void TutorialsPointMain::pointerAsReturnType() {
    int *myLocalCounter = pCountOfSomething();              // this works, because it is static integer, otherwise, it is dangerous
    
    cout << "counter = " << *pCountOfSomething() << endl;
    cout << "counter = " << *pCountOfSomething() << endl;
    
    *myLocalCounter = 150;                                  // editing the static variable
    
    cout << "counter = " << *pCountOfSomething() << endl;
    cout << "counter = " << *pCountOfSomething() << endl;
}

void TutorialsPointMain::referenceExample() {
    int cislo = 520;
    int dalsiCislo = 888;
    int &referenceCislo = cislo;
    
    cislo++;
    referenceCislo++;
    
    cout << "cislo =                " << cislo << endl;
    cout <<" &cislo =               " << &cislo << endl;
    cout << "-----------------------" << endl;
    cout << "referenceCislo =       " << referenceCislo << endl;
    cout << " ; &referenceCislo =   " << &referenceCislo << endl;
}

// references allows change parameters outside the function
void swapByRef(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void TutorialsPointMain::callFuncAndPassReference() {
    int x = 120;
    int y = 65;
    
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "----------------------" << endl;
    
    swapByRef(x, y);
    
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}

double numbers[5] = {6.2, 3.14, 0.023, 0, 654.3};

double &getNumberRef (int i) {
    return numbers[i];
}

void printAllNumbers() {
    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) {
        cout << "[" << i << "] = " << numbers[i] << endl;
    }
    cout << "--------------------------" << endl;
}

void TutorialsPointMain::referenceReturnedExample() {
    printAllNumbers();
    getNumberRef(2) = 41;       // reference returned from a function can be on the left side of expression - it's alias for the original variable
    getNumberRef(4) = 0.15;
    printAllNumbers();
}
