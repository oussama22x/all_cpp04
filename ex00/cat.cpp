#include "cat.hpp"
#include "Animal.hpp"
Cat::Cat() : Animal()
{
    type = "Cat";
    std::cout << "Cat constructor: Creating a cat.\n";
}

Cat::~Cat()
{
    std::cout << "Cat destructor: Destroying a cat.\n";
}

Cat& Cat::operator=(const Cat &src)
{
    std::cout << "Cat copy assignment called\n";
    if(this != &src)
        this->type = src.type;
    return(*this);
}

Cat::Cat(const Cat &src) : Animal(src)
{
    std::cout << "Cat copy constructor called\n";
    this->type = src.type;
}

void Cat::makeSound() const
{
    std::cout << "meow meow\n";
}

std::string Cat::getType() {
    return(this->type);
}