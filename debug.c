

#include"./include/push_swap.h"

void print_list(t_list *lst, char c)									
{													
    int index = 1;											
    while (lst != NULL)											
    {													
        printf("stack_%c[%d]	: number = %d	: order = %d	: group = %d	:address = %p\n",			
               c, index, lst->number, lst->order, lst->group, lst->next);						
        lst = lst->next;										
        index++;											
    }													
printf("\n");
}													
