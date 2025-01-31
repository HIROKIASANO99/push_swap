/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiasano <hiasano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 21:43:01 by hiasano           #+#    #+#             */
/*   Updated: 2025/01/07 21:43:17 by hiasano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	ft_check_a(t_list *stack)
{
	t_list	*pre_stack;

	pre_stack = stack;
	stack = stack->next;
	while (stack != NULL)
	{
		if (!((pre_stack->order + 1) == stack->order))
		{
			return ;
		}
		pre_stack = stack;
		stack = stack->next;
	}
	exit(0);
}
