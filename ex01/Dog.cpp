#include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog constructor: Creating a dog.\n";
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructor: Destroying a dog.\n";
}

Dog::Dog(const Dog &src) : Animal(src)
{
    std::cout << "Dog copy constructor called\n";
    this->type = src.type;
    this->brain = new Brain(*src.brain);
}

Dog& Dog::operator=(const Dog &src)
{
     std::cout << "dog copy assignment called\n";
    if(this != &src)
    {
        this->type = src.type;
        this->brain = new Brain(*src.brain);
    }
    return(*this);
}

void Dog::makeSound() const
{
    std::cout << "woof, woof\n";
}

std::string Dog::getType() 
{
    return(this->type);
}