#include <iostream>
#include "A.h"

namespace As{

    As::A::A()
    { 
        std::cout << "No Parameter Default Constructor A \n"; 
    }

    As::A::A(int x) : Bs::B() , x(x)
    { 
        std::cout << "Constructor 1 Type : A\n"; 
    }

    As::A::A(int x,int y) : Bs::B(y) , x(x)
    { 
        std::cout << "Constructor 2 Type : A\n"; 
    }

    As::A::A(int x,int y,int z) : Bs::B(y,z) , x(x)
    { 
        std::cout << "Constructor 3 Type : A\n"; 
    }


    void A::setX(int x)
    {
        this -> x = x;
    }
    int A::getX() const
    {
        return x;
    }
}