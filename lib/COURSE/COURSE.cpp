#include "COURSE.h"

COURSE::COURSE(int id, std::string name, int credits) {
  _id = id;
  _name = name;
  _credits = credits;
}

COURSE::~COURSE() {}

int COURSE::getCredits() { return (_credits); }

int COURSE::getID() { return (_id); }

std::string COURSE::getName() { return (_name); }
