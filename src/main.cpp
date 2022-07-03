#include "../lib/COURSE/COURSE.h"
#include "../lib/GRADE/GRADE.h"
#include "../lib/STUDENT/STUDENT.h"
// #include "./lib/STUDENT/STUDENT.cpp"

using namespace std;

STUDENT my_student(1, "Hilda Jones");
COURSE my_course(7, "Physics 101", 3);
GRADE my_grade(1, 7, 'B');

int main() {
  cout << "Student: " << my_student.getName() << endl;
  cout << "Course: " << my_course.getName() << endl;
  cout << "Credits: " << my_course.getCredits() << endl;
  cout << "Grade:wqwqw " << my_grade.getGrade() << endl;
  return (0);
}
