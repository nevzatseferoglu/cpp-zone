#include <iostream>
#include "B.h"

namespace Bs{

    Bs::B::B()
    { 
        std::cout << "No Parameter Default Constructor B\n"; 
    }

    Bs::B::B(int y) : Cs::C() , y(y)
    { 
        std::cout << "Constructor 1 Type : B\n"; 
    }

    Bs::B::B(int y,int z) : Cs::C(z) , y(y)
    { 
        std::cout << "Constructor 2 Type : B\n"; 
    }

    void Bs::B::setY(int y)
    {
        this -> y = y;
    }
    int Bs::B::getY() const
    {
        return y;
    }
}