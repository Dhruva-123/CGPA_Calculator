// FILENAME: output.cpp
#include "output.h"
#include <iostream>
#include <iomanip>

void displayResults(const std::vector<course> &courses, double gpa)
{
    std::cout << "\nCourse Details:\n";
    // column headers
    std::cout << std::left << std::setw(30) << "Name"
              << std::setw(10) << "Credits"
              << std::setw(12) << "Grade Point" << "\n";

    std::cout << std::string(52, '-') << "\n";

    // rows
    for (const auto &c : courses)
    {
        std::cout << std::left << std::setw(30) << c.getname()
                  << std::setw(10) << c.getcredits()
                  << std::setw(12) << std::fixed << std::setprecision(2) << c.getgradepoint() << "\n";
    }

    std::cout << "\nSemester GPA: " << std::fixed << std::setprecision(2) << gpa << "\n";
}
