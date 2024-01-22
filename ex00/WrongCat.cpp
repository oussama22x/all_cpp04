#include "WrongCat.hpp"
#include "WrongCat.hpp"
WrongCat::WrongCat() : WrongAnimal()
{
     type =  "WrongCat";
     std::cout << " WrongCat constructor called\n";
}

WrongCat::~WrongCat()
{
    std::cout << " WrongCat destructor called\n";
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
    std::cout << "WrongCat copy constructor called\n";
    this->type = src.type;
}

WrongCat& WrongCat::operator=(const WrongCat &src)
{
    std::cout << "WrongCat copy Assigment called\n";
    if(this != &src)
        this->type = src.type;
    return(*this);
}

void WrongCat::makeSound() const
{
    std::cout << "meow meow\n";
}