#include "./include/push_swap.h"

void	rotate_stack_b(t_list **stack_b, int maxnumber, int posi)
{
	if (posi <= maxnumber / 2)
	{
		while ((*stack_b)->order != maxnumber)
		{
			ft_command_rotate(stack_b);
			ft_printf("rb\n");
		}
	}
	else
	{
		while ((*stack_b)->order != maxnumber)
		{
			ft_command_reverse_rotate(stack_b);
			ft_printf("rrb\n");
		}
	}
}


