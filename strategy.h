#include <iostream>
#include <memory>

class Strategy {
public:
  virtual void operator()() = 0;
  virtual ~Strategy() = default;
};

class Context {
  std::unique_ptr<Strategy> strat_;
public:
  Context() : strat_(nullptr) {}
  void setStrategy(std::unique_ptr<Strategy> strat);
  void strategy();
};

class Strategy1 : public Strategy {
public:
  void operator()() override { std::cout << "Foo\n"; }
};

class Strategy2 : public Strategy {
public:
  void operator()() override { std::cout << "Bar\n"; }
};

class Strategy3 : public Strategy {
public:
  void operator()() override { std::cout << "FooBar\n"; }
};