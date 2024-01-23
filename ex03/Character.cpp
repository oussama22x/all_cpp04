#include "Character.hpp"
#include "trash.hpp"


Character::Character(std::string const &name) : name(name)
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(Character const &src)
{
    this->name = src.getName();
    for(int i = 0; i < 4; i++)
    {
        this->inventory[i] = src.inventory[i]->clone();
            lst_add_back(lst_new(this->inventory[i]));
    }
}

Character::~Character()
{
}

Character &Character::operator=(Character const &src)
{
    if (this != &src)
    {
        name = src.name;
        
        for (int i = 0; i < 4; i++)
        {
            if(src.inventory[i])
                inventory[i] = src.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
    }
    return (*this);
}

std::string const &Character::getName() const
{
    return (name);
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!inventory[i])
        {
            inventory[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        lst_add_back(lst_new(inventory[idx]));
        inventory[idx] = NULL;
    }
    
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && inventory[idx])
        inventory[idx]->use(target);
}
