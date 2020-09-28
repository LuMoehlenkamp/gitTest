#include "strategy.h"

void Context::setStrategy(std::unique_ptr<Strategy> strat) {
  strat_ = std::move(strat);
}

void Context::strategy() {
  if (strat_)
    (*strat_)();
}