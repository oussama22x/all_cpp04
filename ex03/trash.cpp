#include "AMateria.hpp"
#include "trash.hpp"

trash* lst_new(void *ptr)
{
    trash *tmp = new trash;
    tmp->ptr = ptr;
    tmp->next = NULL;
    return tmp;
}
int check_if_addres_exist(trash *node)
{
    trash *tmp;

    tmp = NULL;
    if(!head)
        return 0;
    else
    {
        tmp = (head);
        while(tmp)
        {
            if(tmp->ptr == node->ptr)
                return 1;
            tmp = tmp->next;
        }
    }
    return 0;
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
                if(!check_if_addres_exist(node))
                {
                    tmp->next = node;
                    return ;
                }
                else if(check_if_addres_exist(node))
                {
                    delete node;
                    return ;
                }
            }
            tmp = tmp->next;
        }
    }
}