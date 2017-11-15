//
//  FStreams.hpp
//  CppTut_01
//
//  Created by Vojtech Kubat on 26/10/2017.
//  Copyright © 2017 Vojtech Kubat. All rights reserved.
//

#ifndef FStreams_hpp
#define FStreams_hpp

#include <stdio.h>
#include <string>

using namespace std;

class FStreams {
private:
    static string fileName;
    
public:
    void writeToFile();
    void readFromFile();
};

#endif /* FStreams_hpp */
