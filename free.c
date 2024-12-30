#include"./include/push_swap.h"

void ft_free_stack(t_list *stack)
{
	t_list *temp;

	while(stack != NULL)
	{
		temp = stack;
		stack =stack->next;
		free(temp);
	}
	exit(1);
}
