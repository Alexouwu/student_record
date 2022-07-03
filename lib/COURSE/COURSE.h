#pragma once
#include <iostream>
#include <string>

class COURSE
{
private:
    int _id, _credits;
    std::string _name;
public:
    COURSE(int id, std::string name, int credits);
    ~COURSE();
    int getID();
    int getCredits();
    std::string getName();
};
