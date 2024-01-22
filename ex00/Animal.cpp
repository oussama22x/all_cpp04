#include <iostream>
#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal constructor: Creating an animal.\n";
}

Animal::~Animal()
{
    std::cout << "Animal destructor: Destroying an animal.\n";
}

Animal::Animal(const Animal &src1)
{
    std::cout << "Animal Copy constructor called\n";
    this->type = src1.type;
}

Animal& Animal::operator=(const Animal &src1)
{
    std::cout << "Animal Copy assignment operator called\n";
    if(this != &src1)
        this->type = src1.type;
    return(*this);
}

void Animal::makeSound() const
{
    std::cout << "unknown";
}

std::string Animal::getType() const
{
    return(type);
}