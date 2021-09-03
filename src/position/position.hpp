#ifndef POSITION_H
#define POSITION_H

#include <iostream>

class ILocation;

class Position {
private:
  ILocation* location;
public:
  Position(ILocation* location);
  static int add_one(int number);
  int fromLocation();
};

#endif
