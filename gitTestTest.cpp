#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE singleton_test_module

#include <boost/test/unit_test.hpp>
#include "singleton.h"

singleton* singleton::singletonInst = nullptr;

BOOST_AUTO_TEST_CASE(instanciate_singleton)
{
  singleton* firstInst = singleton::getInstance();
  singleton* secondInst = singleton::getInstance();

  BOOST_CHECK( firstInst != nullptr);
  BOOST_CHECK( secondInst == nullptr);
}
