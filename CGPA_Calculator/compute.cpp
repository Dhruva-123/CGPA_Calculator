// FILENAME: compute.cpp
#include "compute.h"

double calculateGPA(const std::vector<course> &courses)
{
    double totalPoints = 0.0;
    int totalCredits = 0;

    for (const auto &c : courses)
    {
        totalPoints += c.getgradepoint() * c.getcredits();
        totalCredits += c.getcredits();
    }

    // If there are no credits (shouldn't happen because we validate), return 0.0
    return (totalCredits > 0) ? (totalPoints / totalCredits) : 0.0;
}
