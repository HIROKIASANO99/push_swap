
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
		if( count_str == 5)
			{
				stack = stack->next;
				stack = stack->next;
			}
		while(j < count_str)
		{
			digit = digit * 10;
			j++;
		}
		pattern = pattern + stack->order * digit;
		count_str--;
		stack = stack->next;
	}
	printf("pattern = %d\n", pattern);
	return(pattern);
}

void ft_min_sort(t_list **stack_a ,int count_str)
{
	int pattern;

	pattern = 0;
	if(count_str == 5)
		ft_fivesort_first(stack_a);
	pattern = ft_order_pattern(stack_a, count_str);
	if(pattern == 123 || pattern == 23400)		
		ft_printf("1\n");		
	else if(pattern == 132 || pattern == 24300)		
		ft_printf("2\n");		
	else if(pattern == 213 || pattern == 32400)		
		ft_printf("3\n");		
	else if(pattern == 231 || pattern == 34200)		
		ft_printf("4\n");		
	else if(pattern == 321 || pattern == 43200)		
		ft_printf("5\n");		
	else if(pattern == 312 || pattern == 42300)		
		ft_printf("6\n");		
	if(count_str == 5)
		//戻すコマンド
}
