//
//  Vella.hpp
//  Operator Overloading
//
//  Created by Sarahi Cardenas Trejo on 10/28/18.
//  Copyright © 2018 Sarahi Cardenas Trejo. All rights reserved.
//

#ifndef Vella_hpp
#define Vella_hpp
#include <stdio.h>

class Vella{
public:
    int num;
    Vella();//blank Vella object
    Vella(int);//Vella object that already has a number
    Vella operator+(Vella);//operator denotes a and Vella object for another number to add
};

#endif 
