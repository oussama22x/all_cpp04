#include "AMateria.hpp"
#include "ICharacter.hpp"
AMateria::AMateria()
{
    type = "";
};

AMateria::AMateria(std::string const & type)//deep copy
{
    this->type = type;
};

AMateria::AMateria(const AMateria &SRC)
{
    this->type = SRC.type;
};

AMateria& AMateria::operator=(const AMateria &SRC)//DEEP COPY
{
    if (this != &SRC)
    {
        this->type = SRC.type;
    }
    return (*this);
};

AMateria::~AMateria()
{
};

std::string const & AMateria::getType() const
{
    return (this->type);
};

void AMateria::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
};

