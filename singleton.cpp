#include <iostream>

#include "singleton.h"

singleton::~singleton() {};

singleton* singleton::getInstance() {
  if ( singletonInst == nullptr) {
    std::cout<< "creating only instance now" << std::endl;
    singletonInst = new singleton();
  }
  else {
    std::cout<< "single instance already created" << std::endl;
  }
  
  return singletonInst;
}