#include <iostream>
#include "B.h"

namespace As{

    class A : public Bs::B
    {
        public:

            A();

            A(int x);
            
            A(int x ,int y);
            
            A(int x ,int y ,int z);

            void setX(int x);
            int getX() const;
        
        private:
            
            int x;
    };

}