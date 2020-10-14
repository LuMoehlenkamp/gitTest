#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE singleton_test_module

#include <boost/test/unit_test.hpp>
#include "singleton.h"

BOOST_AUTO_TEST_CASE(instanciate_singleton)
{
  singleton* singleton::singletonInst = nullptr;
  singleton* firstInst = singleton::getInstance();
  singleton* secondInst = singleton::getInstance();

  BOOST_CHECK( firstInst != nullptr);
  BOOST_CHECK( secondInst == nullptr);
}
