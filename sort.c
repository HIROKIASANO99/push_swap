
#include "./libft/libft.h"
#include"./ft_printf/include/ft_printf.h"
#include"./include/push_swap.h"

int	ft_find_max_min(t_list **stack, int grp ,int *maxnumber, int *minnumber)
{
	t_list *top;

	top = *stack;
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
	return(maxnumber - minnuber);
}

void	ft_second_sort(t_list **stack_a, t_list **stack_b ,int group)
{
	int maxnumber;
	int minnumber;
	int groupsize;

	maxnumber = 0;
	minnumber = 500;
	groupsize = ft_find_max_min(stack_b, group, &maxnumber, &minnumber);
	printf("group[%d]maxnumber ==	%d\n", group, maxnumber);
	printf("group[%d]minnumber ==	%d\n", group, minnumber);
	printf("group[%d]groupsize ==	%d\n", group, groupsize);
}

void	ft_first_sort(t_list **stack_a, t_list **stack_b ,int top, int bottom)
{
	t_list **current ;
	current = stack_a;
	while(*current != NULL)
	{
		if((*current)->group == bottom)
		{
			ft_command_push(stack_b, current);
			ft_printf("pb\n");
			ft_command_rotate(stack_b);
			ft_printf("rb\n");
		}
		else if((*current)->group == top)
		{
			ft_command_push(stack_b, current);
			ft_printf("pb\n");	
		}
		else
		{
			current = &(*current)->next;
			ft_printf("ra\n");	
		}
	}
}



void	ft_sortstack(t_list *stack_a)
{
//	t_address *address_a; 
	t_list *stack_b;	
	stack_b = NULL;
	//address_a.head = stack_a;
	ft_first_sort(&stack_a, &stack_b, 4, 3);
	ft_first_sort(&stack_a, &stack_b, 5, 2);
	ft_first_sort(&stack_a, &stack_b, 6, 1);

	ft_second_sort(&stack_a, &stack_b , 6);
	ft_second_sort(&stack_a, &stack_b , 5);
	ft_second_sort(&stack_a, &stack_b , 4);
	ft_second_sort(&stack_a, &stack_b , 3);
	ft_second_sort(&stack_a, &stack_b , 2);
	ft_second_sort(&stack_a, &stack_b , 1);

//print_list(stack_a, 'a');
//print_list(stack_b, 'b');
	
}
