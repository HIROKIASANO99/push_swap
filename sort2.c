/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiasano <hiasano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 21:47:13 by hiasano           #+#    #+#             */
/*   Updated: 2025/01/19 00:03:56 by hiasano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf/include/ft_printf.h"
#include "./include/push_swap.h"
#include "./libft/libft.h"

int	ft_order_pattern(t_list **stack_a, int count_str)
{
	t_list	*stack;
	int		pattern;
	int		digit;
	int		j;

	pattern = 0;
	stack = *stack_a;
	while (stack != NULL)
	{
		digit = 1;
		j = 1;
		while (j < count_str)
		{
			digit = digit * 10;
			j++;
		}
		pattern = pattern + stack->order * digit;
		count_str--;
		stack = stack->next;
	}
	return (pattern);
}

void	ft_min_sort(t_list **stack_a, int count_str)
{
	int	pattern;

	pattern = 0;
	if (count_str == 5)
		ft_fivesort_first(stack_a);
	pattern = ft_order_pattern(stack_a, count_str);
printf("patterc = %d\n",pattern);
	if (pattern == 123 || pattern == 34500)
		return ;
	else if (pattern == 132 || pattern == 35400)
		ft_printf("ra\nsa\nrra\n");
	else if (pattern == 213 || pattern == 43500)
		ft_printf("sa\n");
	else if (pattern == 231 || pattern == 45300)
		ft_printf("rra\n");
	else if (pattern == 321 || pattern == 54300)
		ft_printf("sa\nrra\n");
	else if (pattern == 312 || pattern == 53400)
		ft_printf("ra\n");
	if (count_str == 5)
		ft_printf("pa\npa\n");
	exit(0);
}
