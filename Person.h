//
// Created by xxvms on 08/04/18.
//

#ifndef SECTION5BUILD_CLASSES_PERSON_H
#define SECTION5BUILD_CLASSES_PERSON_H

#include <string>

class Person {
private:
  std::string firstName;
  std::string lastName;
  int arbitraryNumber;

public:
  Person();
  ~Person();
  Person(std::string first, std::string last, int arbitrary);
  std::string getName();
};

#endif // SECTION5BUILD_CLASSES_PERSON_H
