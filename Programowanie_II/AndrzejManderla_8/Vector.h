#pragma once
#include <string>

class Vector1 {
public:
    double x, y, z;

    Vector1(double x = 0, double y = 0, double z = 0);

    // Przeciążenie operatora dwuargumentowego (-)
    Vector1 operator-(const Vector1& v) const;

    // Przeciążenie operatora dwuargumentowego (+)
    friend Vector1 operator+(const Vector1& v, const Vector1& v1);

    // Przeciążenie operatora jednoargumentowego (--)
    Vector1 operator--();

    // Przeciążenie operatora jednoargumentowego (++)
    friend Vector1 operator++(const Vector1& v);

    std::string GetVector();


};
