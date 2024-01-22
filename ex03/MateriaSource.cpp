#include "MateriaSource.hpp"

MateriaSource::MateriaSource()//default constructor
{
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)//deee copy constructor
{
    for (int i = 0; i < 4; i++)
        this->inventory[i] = src.inventory[i]->clone();
}

MateriaSource::~MateriaSource()//destructor
{
    for (int i = 0; i < 4; i++)
        if (this->inventory[i])
            delete this->inventory[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)//assignation operator overload
{
    if (this != &rhs)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->inventory[i])
                this->savedrobe[i] = this->inventory[i];
            this->inventory[i] = rhs.inventory[i]->clone();
        }
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m)//learnMateria function
{
    for (int i = 0; i < 4; i++)
    {

        if (!this->inventory[i])
        {
            this->inventory[i] = m;
            break;
        }

    }

}

AMateria *MateriaSource::createMateria(std::string const &type)//createMateria function
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] && this->inventory[i]->getType() == type)
            return (this->inventory[i]->clone());
    }
    return (0);
}