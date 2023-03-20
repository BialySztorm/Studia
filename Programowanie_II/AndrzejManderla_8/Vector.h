#pragma once
#include <string>

class Vector {
private:
    double x, y, z;
public:

    Vector(double x = 0, double y = 0, double z = 0);

    // Przeciążenie operatora dwuargumentowego (-)
    Vector operator-(const Vector& v) const;

    // Przeciążenie operatora dwuargumentowego (+)
    Vector operator+(const Vector& v) const;

    // Przeciążenie operatora jednoargumentowego (--)
    Vector operator--();

    // Przeciążenie operatora jednoargumentowego (++)
    Vector operator++();

    std::string GetVector();

};