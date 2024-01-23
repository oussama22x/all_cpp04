# pragma once

# include "AMateria.hpp"

struct trash{
    void *ptr;
    trash *next;
};

trash *lst_new(AMateria *ptr);
void lst_add_back(trash *node);

trash *head;