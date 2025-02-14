/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortint5_rote.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiasano <hiasano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:48:08 by hiasano           #+#    #+#             */
/*   Updated: 2025/01/30 21:25:02 by hiasano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf/include/ft_printf.h"
#include "./include/push_swap.h"
#include "./libft/libft.h"

// void    ft_command_swap(t_list **node)
// void	ft_command_push(t_list **ipstack, t_list **opstack)
// void	ft_command_rotate(t_list **stack)
// void	ft_command_reverse_rotate(t_list **stack)

void	ft_fivesort_4th_rote(t_list **stack, int box[])
{
	if (box[4] == 1)
	{
		if (box[1] == 2)
			ft_command_rotate(stack);
		if (box[2] == 2)
			ft_command_reverse_rotate(stack);
	}
	return ;
}

void	ft_fivesort_3rd_rote(t_list **stack, int box[])
{
	if (box[2] == 1)
	{
		if (box[0] == 2)
			ft_command_rotate(stack);
		if (box[1] == 2)
			ft_command_rotate(stack);
		if (box[3] == 2)
			ft_command_reverse_rotate(stack);
	}
	if (box[3] == 1)
	{
		if (box[0] == 2)
			ft_command_reverse_rotate(stack);
		if (box[1] == 2)
			ft_command_reverse_rotate(stack);
		if (box[2] == 2)
			ft_command_reverse_rotate(stack);
	}
	return ;
}

void	ft_stack_rote(t_list **stack_a, int box[])
{
	if (box[2] == 1 || box[3] == 1)
		ft_fivesort_3rd_rote(stack_a, box);
	else if (box[4] == 1)
		ft_fivesort_4th_rote(stack_a, box);
}
