/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortint5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiasano <hiasano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 21:47:42 by hiasano           #+#    #+#             */
/*   Updated: 2025/01/27 21:52:02 by hiasano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf/include/ft_printf.h"
#include "./include/push_swap.h"
#include "./libft/libft.h"

void	ft_rm_1or2(t_list **stack)
{
	t_list	**cur;
	t_list	*temp;

	cur = stack;
	while (*cur != NULL)
	{
		if ((*cur)->order == 1 || (*cur)->order == 2)
		{
			temp = *cur;
			*cur = (*cur)->next;
			free(temp);
		}
		else
			cur = &((*cur)->next);
	}
}

void	ft_fivesort_4th(int box[])
{
	if (box[4] == 1)
	{
		if (box[0] == 2)
			ft_printf("rra\npb\npb\n");
		if (box[1] == 2)
			ft_printf("rra\npb\nra\npb\n");
		if (box[2] == 2)
			ft_printf("rra\npb\nrra\nrra\npb\n");
		if (box[3] == 2)
			ft_printf("rra\npb\nrra\npb\n");
	}
	return ;
}

void	ft_fivesort_3rd(int box[])
{
	if (box[2] == 1)
	{
		if (box[0] == 2)
			ft_printf("pb\nra\npb\nrb\n");
		if (box[1] == 2)
			ft_printf("ra\nsa\npb\npb\n");
		if (box[3] == 2)
			ft_printf("ra\nra\npb\npb\n");
		if (box[4] == 2)
			ft_printf("ra\nra\npb\nra\npb\n");
	}
	if (box[3] == 1)
	{
		if (box[0] == 2)
			ft_printf("pb\nra\nra\npb\nrb\n");
		if (box[1] == 2)
			ft_printf("ra\npb\nra\npb\nrb\n");
		if (box[2] == 2)
			ft_printf("rra\nrra\npb\nrra\npb\n");
		if (box[4] == 2)
			ft_printf("rra\nrra\npb\npb\n");
	}
	return ;
}

void	ft_fivesort_2nd(int box[])
{
	if (box[0] == 1)
	{
		if (box[1] == 2)
			ft_printf("pb\npb\n");
		if (box[2] == 2)
			ft_printf("pb\nsa\npb\n");
		if (box[3] == 2)
			ft_printf("pb\nra\nra\npb\nra\n");
		if (box[4] == 2)
			ft_printf("pb\nrra\npb\n");
	}
	if (box[1] == 1)
	{
		if (box[0] == 2)
			ft_printf("pb\npb\nsb\n");
		if (box[2] == 2)
			ft_printf("ra\npb\npb\nrra\n");
		if (box[3] == 2)
			ft_printf("ra\npb\nra\npb\nra\n");
		if (box[4] == 2)
			ft_printf("sa\nrra\npb\npb\n");
	}
	return ;
}

void	ft_fivesort_first(t_list **stack_a)
{
	t_list	*stack;
	int		box[5];
	int		i;

	stack = *stack_a;
	i = 0;
	while (stack != NULL)
	{
		box[i] = stack->order;
		stack = stack->next;
		i++;
	}
	if (box[0] == 1 || box[1] == 1)
		ft_fivesort_2nd(box);
	else if (box[2] == 1 || box[3] == 1)
		ft_fivesort_3rd(box);
	else if (box[4] == 1)
		ft_fivesort_4th(box);
	ft_rm_1or2(stack_a);
	ft_stack_rote(stack_a , box);
	return ;
}
