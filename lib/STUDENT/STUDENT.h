#pragma once
#include <iostream>
#include <string.h>

class STUDENT
{
private:
    int _id;
    std::string _name;
public:
    STUDENT(int id, std::string name);
    ~STUDENT();
    int getID();
    std::string getName();
};
