#include "Cylinder.h"

//? Czy tak powinno by�?
#define M_PI 3.14159265358979323846

template <typename T>
Cylinder<T>::Cylinder(T r, T h) : r(r), h(h) {}

template <typename T>
T Cylinder<T>::CalculateArea() const
{
    return 2 * M_PI * r * (r + h);
}

template class Cylinder<int>;
template class Cylinder<double>;
template class Cylinder<float>;