/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortint5_rote.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiasano <hiasano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 21:47:42 by hiasano           #+#    #+#             */
/*   Updated: 2025/01/27 22:06:23 by hiasano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf/include/ft_printf.h"
#include "./include/push_swap.h"
#include "./libft/libft.h"

//void    ft_command_swap(t_list **node)
//void	ft_command_push(t_list **ipstack, t_list **opstack)
//void	ft_command_rotate(t_list **stack)
//void	ft_command_reverse_rotate(t_list **stack)


void	ft_fivesort_4th_rote(t_list **stack, int box[])
{
	if (box[4] == 1)
	{
		if (box[1] == 2)
			ft_command_reverse_rotate(stack);	
		if (box[2] == 2)
			ft_command_reverse_rotate(stack);	
	}
	return ;
}

void	ft_fivesort_3rd_rote( t_list **stack, int box[])
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


void	ft_stack_rote(t_list **stack_a , int box[])
{
	int i;
	i = 1;
	
	while(i <= 5)
	{
		printf("box[%d] = %d\n", i , box[i - 1]);
		i++; 
	}
	if (box[2] == 1 || box[3] == 1)
		ft_fivesort_3rd_rote(stack_a, box);
	else if (box[4] == 1)
		ft_fivesort_4th_rote(stack_a, box);
	
	print_list(*stack_a, 'A');

}
//void	ft_fivesort_first(t_list **stack_a)
//{
//	t_list	*stack;
//	int		box[5];
//	int		i;
//
//	stack = *stack_a;
//	i = 0;
//	while (stack != NULL)
//	{
//		box[i] = stack->order;
//		stack = stack->next;
//		i++;
//	}
//	if (box[0] == 1 || box[1] == 1)
//		ft_fivesort_2nd(box);
//	else if (box[2] == 1 || box[3] == 1)
//		ft_fivesort_3rd(box);
//	else if (box[4] == 1)
//		ft_fivesort_4th(box);
//	ft_rm_1or2(stack_a);
//	return ;
//}
