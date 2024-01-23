#ifndef TRASH_HPP
#define TRASH_HPP

typedef struct trash
{
    void *ptr;
    struct trash *next;
} trash;
extern trash *head;
trash *lst_new(void *ptr);
void lst_add_back(trash *node);

#endif