#include "AMateria.hpp"
#include "trash.hpp"

trash* lst_new(AMateria *ptr)
{
    trash *tmp = new trash;
    tmp->ptr = ptr;
    tmp->next = NULL;
    return tmp;
}

void lst_add_back(trash *node)
{
    trash *tmp;

    tmp = NULL;
    if(!head) {
        head->next = node;
    }
    else
    {
        tmp = (head);
        while(tmp)
        {
            if(tmp->next == NULL)
            {
                tmp->next = node;
            }
            tmp = tmp->next;
        }
    }
}