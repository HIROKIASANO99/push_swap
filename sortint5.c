
#include "./libft/libft.h"
#include"./ft_printf/include/ft_printf.h"
#include"./include/push_swap.h"

int ft_fivesort_4th(int box[])
{
	int num;

	if(box[5] == 1)
	{
		if(box[1] == 2)
		
		if(box[2] == 2)

		if(box[3] == 2)
		
		if(box[4] == 2)
	
	}
	
	return(num);
}
int ft_fivesort_3rd(int box[])
{
	int num;

	if(box[3] == 1)
	{
		if(box[1] == 2)
		
		if(box[2] == 2)

		if(box[4] == 2)
		
		if(box[5] == 2)
	
	}
	if(box[4] == 1)
	{
		if(box[1] == 2)
		
		if(box[2] == 2)

		if(box[3] == 2)
		
		if(box[5] == 2)
	
	}
	return(num);
}

int ft_fivesort_2nd(int box[])
{
	int num;

	if(box[1] == 1)
	{
		if(box[2] == 2)
		
		if(box[3] == 2)

		if(box[4] == 2)
		
		if(box[5] == 2)
	
	}
	if(box[2] == 1)
	{
		if(box[1] == 2)
		
		if(box[3] == 2)

		if(box[4] == 2)
		
		if(box[5] == 2)
	
	}
	return(num);
}

int ft_fivesort_first(t_list **stack_a)
{
	t_list *stack;
	int box[5];
	int i;

	stack = *stack_a;
	i = 1;
	while((*stack_a) != NULL)
	{
		box[i] = stack->order;
		//1,2を消すif文
		stack = stack->next;
		i++;
	}
	if(box[1] == 1 || box[2] == 1)
		i = ft_fivesort_2nd(box);
	else if(box[3] == 1 || box[4] == 1)
		i = ft_fivesort_3rd(box);
	else if(box[5] == 1)
		ft_fivesort_4th(box);
}