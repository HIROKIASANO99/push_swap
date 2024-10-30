

#include"./include/push_swap.h"

void	ft_check_a(t_list *stack)
{
	t_list *pre_stack;

	pre_stack = stack;
	stack = stack->next;
	while(stack != NULL)
	{
		if(!((pre_stack->order + 1) == stack->order))
		{
			return;
		}	
		pre_stack = stack;
		stack = stack->next;
	}
	exit(0);
}

