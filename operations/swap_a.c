#include "../push_swap.h"

void	swap_a(**t_list)
{
	t_list *temp;
	t_list *head;

	head = *t_list;
	temp = head->next;
	head->next = temp->next;
	temp->next = head;
	*t_list = temp;

}