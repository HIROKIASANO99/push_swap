
#include "./libft/libft.h"
#include"./ft_printf/include/ft_printf.h"
#include"./include/push_swap.h"

int	ft_find_max_min(t_list **stack, int grp ,int *maxnumber, int *minnumber)
{
	while((*stack) != NULL)
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
	return(0);
}

void	ft_second_sort(t_list **stack_a, t_list **stack_b ,int group)
{
	int maxnumber;
	int minnumber;

	maxnumber = 0;
	minnumber = 500;
	*stack_a = NULL;
	ft_find_max_min(stack_b, group, &maxnumber, &minnumber);	
	printf("maxnumber == %d\n",maxnumber);
	printf("minnumber == %d\n",minnumber);
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

	
//	print_list(stack_a, 'a');
//	printf("\n");
//	print_list(stack_b, 'b');
}
