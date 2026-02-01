#include "../push_swap.h"

void    pa(t_list **stack1, t_list **stack2)
{
    t_list *s1_head;
    t_list *s2_head;
    t_list *temp;

    s1_head = *stack1;
    s2_head = *stack2;
    temp = s1_head->next;
    *stack1 = temp;
    s1_head->next = s2_head;
    *stack2 = s1_head;
}
