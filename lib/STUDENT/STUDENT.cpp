#include "STUDENT.h"

STUDENT::STUDENT(int id, std::string name)
{
    _id = id;
    _name = name;
}

STUDENT::~STUDENT()
{
}

int STUDENT::getID(){
    return(_id);
}

std::string STUDENT::getName(){
    return(_name);
}
