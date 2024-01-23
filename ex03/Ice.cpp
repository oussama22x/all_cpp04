#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
};

Ice::Ice(const Ice &copy) : AMateria(copy)
{
    this->type = copy.type;
};

Ice::~Ice()
{
};

Ice &Ice::operator=(const Ice &copy)
{
    if (this != &copy)
    {
        this->type = copy.type;
    }
    return (*this);
};

AMateria *Ice::clone() const
{
    return (new Ice(*this));
};

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
};

