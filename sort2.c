
#include "./libft/libft.h"
#include"./ft_printf/include/ft_printf.h"
#include"./include/push_swap.h"


int ft_order_pattern(t_list **stack_a, int count_str)
{	
	t_list *stack;
	int pattern;
	int digit;
	int j;
	
	pattern = 0;
	stack = *stack_a;
	while(stack != NULL)
	{
		digit = 1;
		j = 1;
		while(j < count_str)
		{
			digit = digit * 10;
			j++;
		}
		pattern = pattern + stack->order * digit;
		count_str--;
		stack = stack->next;
	}
	return(pattern);
}

void ft_min_sort(t_list **stack_a ,int count_str)
{
	int pattern;

	pattern = 0;
	if(count_str == 5)
		ft_fivesort_first(stack_a);
	pattern = ft_order_pattern(stack_a, count_str);
	if(pattern == 123 || pattern == 34500)		
		return;		
	else if(pattern == 132 || pattern == 35400)		
		ft_printf("ra\nsa\nrra");		
	else if(pattern == 213 || pattern == 43500)		
		ft_printf("sa");		
	else if(pattern == 231 || pattern == 45300)		
		ft_printf("rra");		
	else if(pattern == 321 || pattern == 54300)		
		ft_printf("sa\nrra");		
	else if(pattern == 312 || pattern == 53400)		
		ft_printf("ra");		
	exit(0);
}
