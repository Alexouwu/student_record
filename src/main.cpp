#include "../lib/COURSE/COURSE.h"
#include "../lib/GRADE/GRADE.h"
#include "../lib/STUDENT/STUDENT.h"

STUDENT my_student(1, "Hilda Jones");
COURSE my_course(7, "Physics 101", 3);
GRADE my_grade(1, 7, 'B');

int main() {
  std::cout << "Student: " << my_student.getName() << std::endl;
  std::cout << "Course: " << my_course.getName() << std::endl;
  std::cout << "Credits: " << my_course.getCredits() << std::endl;
  std::cout << "Grade:wqwqw " << my_grade.getGrade() << std::endl;
  return (0);
}
