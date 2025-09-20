#include "input.h"
#include "compute.h"
#include "output.h"
#include <vector>

int main()
{
    std::vector<course> courses = getCourses();
    double gpa = calculateGPA(courses);
    displayResults(courses, gpa);
    return 0;
}
