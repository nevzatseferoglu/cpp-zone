#include <iostream>
#include "C.h"

namespace Bs{

    class B : public Cs::C
    {
        public:
            
            B();

            B(int y);
            
            B(int y , int z);
            
            void setY(int y);
            int getY() const;

        private:
            
            int y;
    };

}