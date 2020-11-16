#include "singleton.h"

singleton::~singleton() {};

singleton* singleton::getInstance() {
  if ( singletonInst == nullptr) {
    singletonInst = new singleton();
  }  
  return singletonInst;
}
// test