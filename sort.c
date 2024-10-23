
#include "./libft/libft.h"
#include"./ft_printf/include/ft_printf.h"
#include"./include/push_swap.h"

void	ft_find_max_min(t_list **stack, int grp ,int *maxnumber, int *minnumber)
{
	t_list *top;
	int count;

	top = *stack;
	count = 0;
	while(*stack != NULL)
	{
		if((*stack)->group == grp)
		{
			if((*stack)->order > *maxnumber)
				*maxnumber = (*stack)->order;
			if((*stack)->order < *minnumber)
				*minnumber = (*stack)->order;
		}
		(*stack) = (*stack)->next;
	}
	*stack = top;
}
		
int ft_find_position(t_list **stack_b, int *maxnumber)
{
	t_list *head;
	int i;

	head = *stack_b;
	i = 1;
	while((*stack_b)->order != *maxnumber)
	{
		*stack_b = (*stack_b)->next;
		i++;
	}
	*stack_b = head;
	return(i);
}

void	ft_second_sort(t_list **stack_a, t_list **stack_b ,int size)
{
	int maxnumber;
	int posi;
	int i;

	maxnumber = size;
	while(maxnumber >= 1)
	{
		i = 0;
		posi = ft_find_position(stack_b, &maxnumber);
		if (posi <= maxnumber / 2)
		{
			while((*stack_b)->order != maxnumber)
			{
				ft_command_rotate(stack_b);
				ft_printf("rb\n");
			}
		}
		else
		{
			while((*stack_b)->order != maxnumber)
			{
				ft_command_reverse_rotate(stack_b);
				ft_printf("rrb\n");
			}
		}
		ft_command_push(stack_a, stack_b);
		ft_printf("pa\n");
		maxnumber--;
	}
}





void	ft_first_sort(t_list **stack_a, t_list **stack_b , int top, int bottom)
{
	t_list **current;

	current = stack_a;
	while(*current != NULL)
	{
		if((*current)->group == top)
		{
			ft_command_push(stack_b, current);
			ft_printf("pb\n");
		}
		else if((*current)->group == bottom)
		{
			ft_command_push(stack_b, current);
			ft_printf("pb\n");
			ft_command_rotate(stack_b);
			ft_printf("rb\n");
		}
		else
		{
			current = &(*current)->next;
			ft_printf("ra\n");	
		}
	}
}




void	ft_sortstack(t_list *stack_a, int size)
{
	t_list *stack_b;	

	stack_b = NULL;
	ft_first_sort(&stack_a, &stack_b, 4, 3);
	ft_first_sort(&stack_a, &stack_b, 5, 2);
	ft_first_sort(&stack_a, &stack_b, 6, 1);
	ft_second_sort(&stack_a, &stack_b , size);
//print_list(stack_a, 'a');
//print_list(stack_b, 'b');
	
}
