#include "../push_swap.h"

void    rotate(t_list **stack)
{
    t_list *head;
    t_list *firstnode;

    head = *stack;
    firstnode = *stack;
    while (firstnode->next != NULL)
    {
        firstnode = firstnode->next;
    }
    firstnode->next = head;
    *stack = head->next;
    head->next = NULL;
}

// int main()
// {
//     t_list *head1 = NULL;
//     t_list *head2 = NULL;

//     t_list *newnode4 = ft_lstnew("4");
//     t_list *newnode3 = ft_lstnew("3");
//     t_list *newnode2 = ft_lstnew("2");
//     t_list *newnode1 = ft_lstnew("1");

//     ft_lstadd_front(&head1, newnode4);
//     ft_lstadd_front(&head1, newnode3);
//     ft_lstadd_front(&head1, newnode2);
//     ft_lstadd_front(&head1, newnode1);

//     // t_list *newnode3 = ft_lstnew("4");
//     // t_list *newnode4 = ft_lstnew("5");

//     // ft_lstadd_front(&head2, newnode3);
//     // ft_lstadd_front(&head2, newnode4);

//     rotate(&head1);

//     t_list *temp1 = head1;
    
//     while(temp1)
//     {
//         printf("%s", (char *)temp1->content);
//         temp1 = temp1->next;
        
//     }

//     // printf("\n");

//     // t_list *temp2 = head2;
//     // while(temp2)
//     // {
//     //     printf("%s", (char *)temp2->content);
//     //     temp2 = temp2->next;
//     // }
    
//     return 0;
// }
