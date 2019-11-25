#include <iostream>
#include "A.h"

using namespace As;

int main(void)
{
    std::cout << "\nType 1 ====================\n\n";
    A a3(1);
    std::cout << "\nType 2 ====================\n\n";
    A a2(1,1);
    std::cout << "\nType 3 ====================\n\n";
    A a1(1,1,1);
    std::cout << "===========================\n\n";

    return 0;
}