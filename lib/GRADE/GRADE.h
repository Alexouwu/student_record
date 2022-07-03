#pragma once
#include <iostream>
#include <string>

class GRADE
{
private:
    int _student_id, _course_id;
    char _grade;
public:
    GRADE(int student_id, int course_id, char grade);
    ~GRADE();
    int getStudentID();
    int getCourseID();
    char getGrade();
};
