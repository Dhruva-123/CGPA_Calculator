#include "compute.h"

double calculateGPA(const std::vector<course> &courses)
{
    double totalPoints = 0;
    int totalCredits = 0;

    for (const auto &c : courses)
    {
        totalPoints += c.getgradepoint() * c.getcredits();
        totalCredits += c.getcredits();
    }

    return totalCredits ? totalPoints / totalCredits : 0;
}
