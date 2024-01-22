#include "cat.hpp"
#include "AAnimal.hpp"
Cat::Cat()
{
    type = "Cat";
    ida = new Brain;
    std::cout << "Cat constructor: Creating a cat.\n";
}

Cat::~Cat()
{
    delete ida;
    std::cout << "Cat destructor: Destroying a cat.\n";
}

Cat::Cat(const Cat &src) 
{
    std::cout << "Cat copy constructor called\n";
    this->type = src.type;
    this->ida = new Brain();
    *ida = *src.ida;
}

Cat& Cat::operator=(const Cat &src)
{
    std::cout << "Cat copy assignment called\n";
    if(this != &src)
        this->type = src.type;
    return(*this);
}

void Cat::makesound() const
{
    std::cout << "meow meow\n";
}

std::string Cat::getType() {
    return(this->type);
}