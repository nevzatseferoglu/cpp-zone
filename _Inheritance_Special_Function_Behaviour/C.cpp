#include <iostream>
#include "C.h"

namespace Cs{

    Cs::C::C()
    { 
        std::cout << "No Parameter Default Constructor C\n"; 
    }

    Cs::C::C(int z) : z(z)
    { 
        std::cout << "Constructor 1 Type : C\n"; 
    }

    void Cs::C::setC(int z)
    {
        this -> z = z;
    }
    int Cs::C::getC() const
    {
        return z;
    }
}