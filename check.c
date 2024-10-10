

#include"./include/push_swap.h"

void	ft_check_sort(t_list *stack);
{
	t_list *pre_stack;

	pre_stack = stack;
	stack = stack->next;
	while(stack != NULL)
	{
		if(pre_stack->order >= stack->order)
		{
			break;
		}	
		pre_stack = stack;
		stack = stack->next;
	}
	
}

