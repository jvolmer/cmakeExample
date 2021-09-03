#define BOOST_TEST_DYN_LINK

#include "location/location.hpp"
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(it_returns_4) {
  Location location;
  BOOST_TEST(location.get() == 4);
}
