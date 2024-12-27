
#include "./libft/libft.h"
#include"./ft_printf/include/ft_printf.h"
#include"./include/push_swap.h"

void ft_one_two_delete(t_list **stack)
{
	t_list *temp;
	
	temp = *stack;
	temp = (*stack)->next;
	*stack = temp->next;
	free(temp);
}

void ft_fivesort_4th(int box[])
{
	if(box[5] == 1)
	{
		if(box[1] == 2)
			ft_printf("rra\npb\npb\n");		
		if(box[2] == 2)
			ft_printf("rra\npb\nrra\npb\nrb\n");		
		if(box[3] == 2)
			ft_printf("rra\npb\nrra\nrra\npb\n");		
		if(box[4] == 2)
			ft_printf("rra\npb\nrra\npb\n");		
	}
	return;
}

void ft_fivesort_3rd(int box[])
{
	if(box[3] == 1)
	{
		if(box[1] == 2)
			ft_printf("pb\nra\npb\nrb\n");
		if(box[2] == 2)
			ft_printf("ra\nsa\npb\npb\n");
		if(box[4] == 2)
			ft_printf("ra\nra\npb\npb\n");
		if(box[5] == 2)
			ft_printf("ra\nra\npb\nra\npb\npb\n");
	}
	if(box[4] == 1)
	{
		if(box[1] == 2)
			ft_printf("pb\nra\nra\npb\nrb\n");
		if(box[2] == 2)
			ft_printf("ra\npb\nra\npb\nrb\n");
		if(box[3] == 2)
			ft_printf("rra\nrra\npb\nrra\npb\n");
		if(box[5] == 2)
			ft_printf("rra\nrra\npb\npb\n");
	}
	return;
}

void ft_fivesort_2nd(int box[])
{
	if(box[1] == 1)
	{
		if(box[2] == 2)
			ft_printf("pb\npb\n");
		if(box[3] == 2)
			ft_printf("pb\nra\npb\n");
		if(box[4] == 2)
			ft_printf("pb\nra\nra\npb\n");
		if(box[5] == 2)
			ft_printf("pb\nrra\npb\n");
	}
	if(box[2] == 1)
	{
		if(box[1] == 2)
			ft_printf("pb\npb\nsb\n");
		if(box[3] == 2)
			ft_printf("ra\npb\nsb\n");
		if(box[4] == 2)
			ft_printf("ra\npb\nra\npb\n");
		if(box[5] == 2)
			ft_printf("ra\npb\nra\nra\npb\n");
	}
	return;
}

void ft_fivesort_first(t_list **stack_a)
{
	t_list *stack;
	int box[5];
	int i;

	stack = *stack_a;
	i = 1;
	while((*stack_a) != NULL)
	{
		box[i] = stack->order;
		if(box[i] == 1 || box[i] == 2)
				ft_one_two_delete(&stack);
		stack = stack->next;
		i++;
	}
	if(box[1] == 1 || box[2] == 1)
		ft_fivesort_2nd(box);
	else if(box[3] == 1 || box[4] == 1)
		ft_fivesort_3rd(box);
	else if(box[5] == 1)
		ft_fivesort_4th(box);
	return;
}
