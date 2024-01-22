#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal()
{
     type =  "WrongAnimal\n";
     std::cout << "Wrong Animal constructor called\n";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animal destructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    std::cout << "Wrong Animal copy constructor called\n";
    this->type = src.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &src)
{
    std::cout << "Wrong Animal copy Assigment called\n";
    if(this != &src)
        this->type = src.type;
    return(*this);
}

std::string WrongAnimal::getType() const
{
    return(type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong Animal sound\n";
}