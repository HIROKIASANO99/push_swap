/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiasano <hiasano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 20:19:56 by hiasano           #+#    #+#             */
/*   Updated: 2025/01/14 20:20:00 by hiasano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	rotate_stack_b(t_list **stack_b, int maxnumber, int posi)
{
	if (posi <= maxnumber / 2)
	{
		while ((*stack_b)->order != maxnumber)
		{
			ft_command_rotate(stack_b);
			ft_printf("rb\n");
		}
	}
	else
	{
		while ((*stack_b)->order != maxnumber)
		{
			ft_command_reverse_rotate(stack_b);
			ft_printf("rrb\n");
		}
	}
}
