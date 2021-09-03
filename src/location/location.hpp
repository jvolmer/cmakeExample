#ifndef LOCATION_H
#define LOCATION_H

class ILocation {
public:
  virtual int get() = 0;
};

class Location: public ILocation {
public:
  int get();
};

#endif
