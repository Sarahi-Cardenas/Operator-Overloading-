//
//  main.cpp
//  Operator Overloading
//
//  Created by Sarahi Cardenas Trejo on 10/28/18.
//  Copyright © 2018 Sarahi Cardenas Trejo. All rights reserved.
//

#include <iostream>
#include "Vella.hpp"
using namespace std;

int main() {
    Vella x(45);
    Vella y(56);
    Vella z;
    
    z=x+y;
    cout << z.num << endl;
    
    return 0;
}
