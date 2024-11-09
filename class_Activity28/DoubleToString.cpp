//
//  DoubleToString.cpp
//  class_Activity28
//
//  Created by Parsa Faraji on 11/8/24.
//

#include "DoubleToString.hpp"

// function definition
string doubleToString(double number) {
    // initialize stream
    stringstream stream;
    
    // pass to stream
    stream<< fixed << setprecision(2) <<number;
    
    // cast tos tring
    string str= stream.str();
    return str;
}
