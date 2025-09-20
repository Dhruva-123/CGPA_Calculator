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
    // Constructor
    course(const std::string &n = "", int c = 0, double g = 0.0);

    // Setters
    void setname(const std::string &n);
    void setcredits(int c);
    void setgradepoint(double g);

    // Getters
    std::string getname() const;
    int getcredits() const;
    double getgradepoint() const;
};
std::vector<course> getCourses();

#endif
