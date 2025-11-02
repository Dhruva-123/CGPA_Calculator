// FILENAME: input.h
#ifndef INPUT_H
#define INPUT_H

#include <vector>
#include <string>

class course
{
private:
    std::string name;
    int credits;
    double gradepoint;

public:
    // Constructor (set sensible defaults)
    course(const std::string &n = "", int c = 1, double g = 0.0);

    // Setters
    void setname(const std::string &n);
    void setcredits(int c);
    void setgradepoint(double g);

    // Getters
    std::string getname() const;
    int getcredits() const;
    double getgradepoint() const;
};

// Read course list from user (interactive)
std::vector<course> getCourses();

#endif // INPUT_H
