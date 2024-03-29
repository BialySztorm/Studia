#include "Cylinder.h"
#include <iostream>

Cylinder::Cylinder()
{
	std::cout << "Constructor Cylinder\n";
	name = "";
}

// skipcq: CXX-P2009
Cylinder::Cylinder(std::string name):Circle(name)
{
	std::cout << "Constructor Cylinder " << name << std::endl;
	this->name = name;
}

Cylinder::~Cylinder()
{
	std::cout << "Destructor Cylinder " << name << std::endl;
}
