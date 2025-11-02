// FILENAME: input.cpp
#include "input.h"
#include <iostream>
#include <vector>
#include <limits>

// Constructor with initializer list and validation
course::course(const std::string &n, int c, double g)
    : name(n), credits((c > 0) ? c : 1), gradepoint((g >= 0.0 && g <= 10.0) ? g : 0.0)
{
}

void course::setname(const std::string &n)
{
    name = n;
}

void course::setcredits(int c)
{
    credits = (c > 0) ? c : 1;
}

void course::setgradepoint(double g)
{
    gradepoint = (g >= 0.0 && g <= 10.0) ? g : 0.0;
}

std::string course::getname() const
{
    return name;
}

int course::getcredits() const
{
    return credits;
}

double course::getgradepoint() const
{
    return gradepoint;
}

std::vector<course> getCourses()
{
    int n;
    std::cout << "Enter number of courses: ";
    while (!(std::cin >> n) || n <= 0)
    {
        std::cout << "Please enter a valid positive number of courses: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::vector<course> courses;
    courses.reserve(n);

    for (int i = 0; i < n; ++i)
    {
        std::string name;
        int credits;
        double grade;

        std::cout << "\nCourse " << i + 1 << " name: ";
        std::getline(std::cin >> std::ws, name);

        std::cout << "Credits: ";
        while (!(std::cin >> credits) || credits <= 0)
        {
            std::cout << "Enter a valid positive credit: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        std::cout << "Grade point (0-10): ";
        while (!(std::cin >> grade) || grade < 0.0 || grade > 10.0)
        {
            std::cout << "Enter a valid grade point (0-10): ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        // Construct validated course
        course c(name, credits, grade);
        courses.push_back(c);
    }

    return courses;
}
