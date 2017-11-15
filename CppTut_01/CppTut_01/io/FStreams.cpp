//
//  FStreams.cpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 26/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#include "FStreams.hpp"

#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

string FStreams::fileName = "file.txt";
//static string fileName = "file.txt";          // does not work !!

void FStreams::writeToFile() {
    cout << "name of the file: " << fileName << endl;
    
    char chData[100];
    
    ofstream outputFileStream;
    outputFileStream.open(fileName, ios::ate | ios::app);
    
    cin.getline(chData, 100);
    
    outputFileStream << chData << endl;
    
    outputFileStream.close();
    
}

void FStreams::readFromFile() {
    
    string data;
    
    ifstream f(fileName);       // ifstream opens the file (passed through constructor)
    stringstream buffer;
    buffer << f.rdbuf();
    
    data = buffer.str();
    
    cout << "----------------------------------------------------" << endl;
    
    cout << data;
    cout << endl;
    
    cout << "----------------------------------------------------" << endl;
}
