
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
		j = 0;
		while(j != count_str)
		{
			digit = digit * 10;
			j++;
		}
		pattern = stack->order * digit;
		count_str;
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
	}
	if(count_str == 5)
	{
		pattern = ft_order_pattern(stack_a, count_str);
	}
}
