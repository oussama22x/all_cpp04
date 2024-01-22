#include "Character.hpp"

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
    }
}

Character::~Character()
{
    for (int i = 0; i < 4; i++) {
        std::cout << "addrr: " << i << "  " << inventory[i] << std::endl;
        if (inventory[i])
            delete inventory[i];
    }
}

Character &Character::operator=(Character const &src)
{
    if (this != &src)
    {
        name = src.name;
        for (int i = 0; i < 4; i++)
        {
            if (inventory[i])
                delete inventory[i];
            inventory[i] = src.inventory[i]->clone();
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
        SAVE_DROBED[idx] = inventory[idx];
        inventory[idx] = NULL;
    }
    
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && inventory[idx])
        inventory[idx]->use(target);
}

