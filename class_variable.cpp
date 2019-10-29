#include <iostream>
using std::cout;
using std::cin;
using std::cerr;
using std::string;
class Person{
  public:
    Person(){};
    static const int getCount(){ return classCount;}
  private:
    static const int classCount = 3;
    /* Default initialization of classCount class variable */
    /* It is also possible but is not suitable for the purpose of using static variable */
};
int main(void)
{
  cout << Person::getCount() << '\n'; // getCount has been already defined as class function;
  Person p1;
  cout<< p1.getCount() << '\n'; // getCount function act like an instance function of the object but it is not;

  return 0;
}
