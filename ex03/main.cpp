#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include <iostream>
#include "file.hpp"


int main()
{
    head->next = NULL;
    head->ptr = NULL;
    IMateriaSource* src = new MateriaSource();
    lst_add_back(lst_new(src));
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    lst_add_back(lst_new(me));
    ICharacter* test = new Character("test");
    lst_add_back(lst_new(test));
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    me->equip(tmp);
    me->equip(tmp);
    me->equip(tmp);
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    test->equip(tmp);
    test->unequip(0);
    test->unequip(1);
    test->unequip(2);
    test->unequip(3);
    ICharacter* bob = new Character("bob");
    lst_add_back(lst_new(bob));
    me->use(0, *bob);
    me->use(1, *bob);
    test->use(3, *bob);
    return 0;
}