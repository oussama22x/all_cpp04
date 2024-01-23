#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
MateriaSource::MateriaSource()//default constructor
{
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)//deee copy constructor
{
    
    for ( int i = 0; i < 4; i++)
    {
        if(src.inventory[i])
            this->inventory[i] = src.inventory[i]->clone();
       lst_add_back(lst_new(this->inventory[i]));
    }
}

MateriaSource::~MateriaSource()//destructor
{
}

MateriaSource &MateriaSource::operator=(MateriaSource const &src)//assignation operator overload
{
    if (this != &src)
    {
        for (int i = 0; i < 4; i++)
        {
            if(src.inventory[i])
                this->inventory[i] = src.inventory[i]->clone();
            else
                this->inventory[i] = NULL;
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
            lst_add_back(lst_new(this->inventory[i]));
            return ;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)//createMateria function
{
    AMateria *tmp;

    tmp = NULL;
    if(type == "ice")
        tmp = new Ice();
    else if(type == "cure")
        tmp = new Cure();
    return (tmp);
}