/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiasano <hiasano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 21:44:58 by hiasano           #+#    #+#             */
/*   Updated: 2025/01/07 21:45:03 by hiasano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf/include/ft_printf.h"
#include "./libft/libft.h"

void	ft_command_swap(t_list **node)
{
	t_list	*current_node;

	if (!node || !*node)
		return ;
	current_node = *node;
	*node = (*node)->next;
	*node = current_node;
	current_node->next = *node;
	return ;
}

void	ft_command_push(t_list **ipstack, t_list **opstack)
{
	t_list	*temp;

	if (!opstack || !*opstack)
		return ;
	temp = *opstack;
	*opstack = (*opstack)->next;
	temp->next = NULL;
	ft_lstadd_front(ipstack, temp);
	return ;
}

void	ft_command_rotate(t_list **stack)
{
	t_list	*last_node;
	t_list	*first_node;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first_node = *stack;
	*stack = first_node->next;
	first_node->next = NULL;
	last_node = *stack;
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = first_node;
	return ;
}

void	ft_command_reverse_rotate(t_list **stack)
{
	t_list	*top_node;
	t_list	*bottom_node;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	top_node = *stack;
	while (top_node->next)
	{
		bottom_node = top_node;
		top_node = top_node->next;
	}
	bottom_node->next = NULL;
	top_node->next = *stack;
	*stack = top_node;
	return ;
}
