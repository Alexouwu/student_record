#include "GRADE.h"

GRADE::GRADE(int student_id, int course_id, char grade) {
  _student_id = student_id;
  _course_id = course_id;
  _grade = grade;
}

GRADE::~GRADE() {}

int GRADE::getCourseID() { return (_course_id); }

int GRADE::getStudentID() { return (_student_id); }

char GRADE::getGrade() { return (_grade); }
