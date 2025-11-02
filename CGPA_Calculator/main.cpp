// main.cpp
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

    // Pause before exit so the console window doesn't immediately close
    std::cout << "\nPress Enter to exit...";
    // Clear any error flags (just in case)
    std::cin.clear();
    // Remove leftover input up to and including newline (prevents immediate return)
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    // Wait for a final Enter press
    std::cin.get();

    return 0;
}
