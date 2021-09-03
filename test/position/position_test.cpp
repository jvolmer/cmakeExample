#define BOOST_TEST_DYN_LINK

#include "position/position.hpp"
#include "location/location.hpp"
#include <boost/test/unit_test.hpp>
#include <turtle/mock.hpp>

MOCK_BASE_CLASS(MockLocation, ILocation) { MOCK_METHOD(get, 0); };

BOOST_AUTO_TEST_CASE(is_adds_one) {
  BOOST_TEST(Position::add_one(1) == 2);
}

BOOST_AUTO_TEST_CASE(it_gives_location) {
  MockLocation location;
  Position position(&location);
  MOCK_EXPECT(location.get).returns(7);
  
  BOOST_TEST(position.fromLocation() == 7);
}
