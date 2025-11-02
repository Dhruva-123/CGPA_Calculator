// main file that runs everything
#include "input.h"
#include "compute.h"
#include "output.h"
#include <vector>
#include <iostream>
#include <limits>

int main()
{
    std::vector<course> courses = getCourses();
    double gpa = calculateGPA(courses);
    displayResults(courses, gpa);
    std::cout << "\nPress Enter to exit...";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    return 0;
}
