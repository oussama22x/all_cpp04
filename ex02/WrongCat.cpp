#include "WrongCat.hpp"
#include "WrongCat.hpp"
WrongCat::WrongCat()
{
     type =  "unknown\n";
     std::cout << "Wrong Animal constructor called\n";
}

WrongCat::~WrongCat()
{
    std::cout << "Wrong Animal destructor called\n";
}

WrongCat::WrongCat(const WrongCat &src)
{
    std::cout << "Wrong Animal copy constructor called\n";
    this->type = src.type;
}

WrongCat& WrongCat::operator=(const WrongCat &src)
{
    std::cout << "Wrong Animal copy Assigment called\n";
    if(this != &src)
        this->type = src.type;
    return(*this);
}

void WrongCat::makesound() const
{
    std::cout << "meow meow\n";
}