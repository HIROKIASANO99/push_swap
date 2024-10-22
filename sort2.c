
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
		while(j != count_str)
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
	if(count_str == 3)
	{
		pattern = ft_order_pattern(stack_a, count_str);
		if(pattern == 123)		
			ft_printf("1\n");		
		if(pattern == 132)		
			ft_printf("2\n");		
		if(pattern == 213)		
			ft_printf("3\n");		
		if(pattern == 231)		
			ft_printf("4\n");		
		if(pattern == 321)		
			ft_printf("5\n");		
		if(pattern == 312)		
			ft_printf("6\n");		
	}
}
