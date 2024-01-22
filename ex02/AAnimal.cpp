#include <iostream>
#include "AAnimal.hpp"
AAnimal::AAnimal() : type("AAnimal")
{
    std::cout << "AAnimal constructor: Creating an Aanimal.\n";
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor: Destroying an Aanimal.\n";
}

AAnimal::AAnimal(const AAnimal &src1)
{
    std::cout << "AAnimal Copy constructor called\n";
    this->type = src1.type;
}

AAnimal& AAnimal::operator=(const AAnimal &src1)
{
    std::cout << "AAnimal Copy assignment operator called\n";
    if(this != &src1)
        this->type = src1.type;
    return(*this);
}

std::string AAnimal::getType() const
{
    return(type);
}