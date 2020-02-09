#include <iostream>

#include "singleton.h"

// #include <wiringpi>

singleton * singleton::singletonInst = nullptr;

int main() {
  for(int testVar = 0; testVar < 10; ++testVar) {
    std::cout << testVar << std::endl; 
  }
  std::cout << "Hello world!\n";
  singleton *singleInst = singleton::getInstance();

  singleton *secondInst = singleton::getInstance();

  return 0;
}
