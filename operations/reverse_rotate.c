#include "../push_swap.h"

void    reverse_rotate(t_list **stack)
{
    t_list *head;
    t_list *lastnode;

    head = *stack;
    lastnode = *stack;
    while(lastnode->next != NULL)
    {
        lastnode = lastnode->next;
    }
    *stack = lastnode;
    lastnode->next = head;
    while(head->next != lastnode)
    {
        head = head->next;
    }
    head->next = NULL;
}
