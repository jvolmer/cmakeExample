#include "location/location.hpp"
#include "position.hpp"
#include <iostream>

Position::Position(ILocation *location) : location{location} {}

int Position::add_one(int number) { return number + 1; }

int Position::fromLocation() { return location->get(); }
