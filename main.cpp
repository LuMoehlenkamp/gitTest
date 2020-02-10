#include <iostream>

#include "singleton.h"
#include "strategy.h"

// #include <wiringpi>

singleton * singleton::singletonInst = nullptr;

int main() {
  for(int testVar = 0; testVar < 10; ++testVar) {
    std::cout << testVar << std::endl; 
  }
  std::cout << "Hello world!\n";
  // --------------- singleton Test from here ---------------------
  singleton *singleInst = singleton::getInstance();

  singleton *secondInst = singleton::getInstance();

  // --------------- strategy Test from here ----------------------
  Context c;

  c.setStrategy( std::unique_ptr<Strategy>(new Strategy1));
  c.strategy();

  c.setStrategy( std::unique_ptr<Strategy>(new Strategy2));
  c.strategy();

  c.setStrategy( std::unique_ptr<Strategy>(new Strategy3));
  c.strategy();

  return 0;
}
