#include <iostream>
#include <new>

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::ostream;
using std::istream;


void pointerToFoo(int*& p) 
{
    /* Adress of p = 0x535634 */
    /* Notice that adress of p is the exactly same as located in main one */
    /* There is no copying on the memory for hanling local environment in the function */
    *p=6;
    /*P has changed !*/
}
int main(void)
{
    int* p = new int;
    /* Adress of p = 0x535634 */
    pointerToFoo(p);
    cout << *p << endl;

    /*Output does produce 6 as a value of p point to */
    delete p;
    /*Release adress of p to the OS */
    return 0;
}