#include "car.h"
#include <iostream>

// skipcq: CXX-W2009
int Car::ID = 0;

Car::Car()
{
    make = "";
    model = "";
    year = 0;
    id = ID++;
    std::cout << id <<" Default constructor called" << std::endl;
}

// skipcq: CXX-P2009
Car::Car(std::string m, std::string mo, int y)
{
    // skipcq: CXX-P2009
    make = m;
    // skipcq: CXX-P2009
    model = mo;
    year = y;
    id = ID++;
    std::cout << id << " Parametric constructor called" << std::endl;
}

Car::~Car()
{
    std::cout << id << " Destructor called for: "<< model <<" "<< year << std::endl;
}

void Car::displayInfo()
{
    std::cout << "Make: " << make << ", ";
    std::cout << "Model: " << model << ", ";
    std::cout << "Year: " << year << ", ";
    std::cout << "Id: " << id << std::endl;
}
