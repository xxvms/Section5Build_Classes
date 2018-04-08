#include "Person.h"
#include <iostream>

using std::cout;
using std::string;
// it is better to use individual things you want to call such as string or cout rather then all by using:
//using namespace std;
// don't put using .... inside header file!


int main() {
  Person person1{"Tom", "Breza", 43};
  Person person2{"Ola", "Dabek", 40};
  {
    Person person3;
  }
  std::string name = person1.getName();
  std::cout << name;
  std::cout << '\n';
  std::string name2 = person2.getName();
  std::cout << name2;
  std::cout << '\n';
  //test

  return 0;
}