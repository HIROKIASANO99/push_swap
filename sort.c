
#include "./libft/libft.h"
#include"./ft_printf/include/ft_printf.h"


void	ft_first_sort(t_list **stack_aa, t_list **stack_bb)
{
	t_list *stack_a;
	t_list *stack_b;

	stack_a = *stack_aa;
	stack_b = *stack_bb;
	while(stack_a != NULL)
	{
		if(stack->group == 1)
		{
			ft_command_push(stack_b, stack_a);
		}
		if(stack->group == 6)
		{
			ft_command_push(stack_b, stack_a);
		}	
		stack_a = stack->next;
	}
}

void	ft_sortstack(t_list *stack_a)
{
	t_list *stack_b;
		
	ft_first_sort(stack_a, stack_b);
}
