//
//  Vella.cpp
//  Operator Overloading
//
//  Created by Sarahi Cardenas Trejo on 10/28/18.
//  Copyright © 2018 Sarahi Cardenas Trejo. All rights reserved.
//

#include <iostream>
#include "Vella.hpp"
using namespace std;

Vella::Vella(){
}

Vella::Vella(int x){
    num = x;
}

Vella Vella::operator+ (Vella avo){
    Vella newObject;
    newObject.num = num + avo.num;
    return(newObject);
}
