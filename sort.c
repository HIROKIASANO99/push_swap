
#include "./libft/libft.h"
#include"./ft_printf/include/ft_printf.h"
#include"./include/push_swap.h"

int	ft_find_max_min(t_list **stack, int grp ,int *maxnumber, int *minnumber)
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
			count++;
		}
		(*stack) = (*stack)->next;
	}
	*stack = top;
	return(count);
}

void	ft_second_sort(t_list **stack_a, t_list **stack_b ,int group)
{
	int maxnumber;
	int minnumber;
	int groupsize;
	t_list *bottom;

	maxnumber = 0;
	minnumber = 500;
	groupsize = ft_find_max_min(stack_b, group, &maxnumber, &minnumber);
	//bottom = ft_find_bottom(stack_b);
	while(groupsize > 0)
	{
		while((*stack_b)->group == group)
		{	
			if((*stack_b)->number == maxnumber)
			{
				ft_command_push(stack_a, stack_b);
//			ft_printf("pa\n");
				maxnumber--;
				groupsize--;
			}	
			ft_command_rotate(stack_b);
//		ft_printf("rb\n");
		}
		ft_command_reverse_rotate(stack_b);
printf("-------------------------\n");
//printf("stack_b	: number = %d	: order = %d	: group = %d	:address = %p\n",			
//(*stack_b)->number, (*stack_b)->order, (*stack_b)->group, (*stack_b)->next);						
		while((*stack_b)->group == group)
		{
			printf("---------------\n");
	//printf("-------------------------\n");
			ft_command_reverse_rotate(stack_b);
//		ft_printf("rrb\n");
			if((*stack_b)->number == maxnumber)
			{
				ft_command_push(stack_a, stack_b);
//			ft_printf("pa\n");
				maxnumber--;
				groupsize--;
			}	
		}
		ft_command_rotate(stack_b);
	}

//	printf("group[%d]maxnumber ==	%d\n", group, maxnumber);
//	printf("group[%d]minnumber ==	%d\n", group, minnumber);
//	printf("group[%d]groupsize ==	%d\n", group, groupsize);
}

void	ft_first_sort(t_list **stack_a, t_list **stack_b ,int grp)
{
	t_list **current;
	int i;

	current = stack_a;
	i = 1;
	while(*current != NULL)
	{
		if((*current)->group == grp)
		{
			ft_command_push(stack_b, current);
//			ft_printf("pb\n");
			if(++i % 2 == 0)
				continue;
			if(i % 2 == 1)
			{
				ft_command_rotate(stack_b);
//				ft_printf("rb\n");
			}
		}
		else
		{
			current = &(*current)->next;
//			ft_printf("ra\n");	
		}
	}
}



void	ft_sortstack(t_list *stack_a)
{
	t_list *stack_b;	
	int i;

	stack_b = NULL;
	i = 1;
	while(i <= 6)
	{
		ft_first_sort(&stack_a, &stack_b, i);
		i++;
	}

	ft_second_sort(&stack_a, &stack_b , 6);
//	ft_second_sort(&stack_a, &stack_b , 5);
//	ft_second_sort(&stack_a, &stack_b , 4);
//	ft_second_sort(&stack_a, &stack_b , 3);
//	ft_second_sort(&stack_a, &stack_b , 2);
//	ft_second_sort(&stack_a, &stack_b , 1);

print_list(stack_a, 'a');
print_list(stack_b, 'b');
	
}
