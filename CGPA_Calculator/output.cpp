#include "output.h"
#include <iostream>
#include <iomanip>

void displayResults(const std::vector<course> &courses, double gpa)
{
    std::cout << "\nCourse Details:\n";
    std::cout << std::setw(15) << "Name"
              << std::setw(10) << "Credits"
              << std::setw(12) << "Grade Point\n";

    for (const auto &c : courses)
    {
        std::cout << std::setw(15) << c.getname()
                  << std::setw(10) << c.getcredits()
                  << std::setw(12) << c.getgradepoint() << "\n";
    }

    std::cout << "\nSemester GPA: " << gpa << "\n";
}
