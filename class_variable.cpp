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
    /* Default initialization of classCount class variable */
    static const int classCount = 3;
};
int main(void)
{
  cout << Person::getCount() << '\n'; // getCount has been already defined as class function;
  Person p1;
  cout<< p1.getCount() << '\n'; // getCount function act like an instance function of the object but it is nor;

  return 0;
}