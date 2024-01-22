#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    ida = new Brain();
    std::cout << "Dog constructor: Creating a dog.\n";
}

Dog::~Dog()
{
    delete ida;
    std::cout << "Dog destructor: Destroying a dog.\n";
}

Dog::Dog(const Dog &src)
{
     std::cout << "Dog copy constructor called\n";
     this->type = src.type;
     ida = new Brain();
     *ida = *src.ida;
}

Dog& Dog::operator=(const Dog &src)
{
     std::cout << "dog copy assignment called\n";
    if(this != &src)
        this->type = src.type;
    return(*this);
}

void Dog::makesound() const
{
    std::cout << "woof, woof\n";
}

std::string Dog::getType() 
{
    return(this->type);
}