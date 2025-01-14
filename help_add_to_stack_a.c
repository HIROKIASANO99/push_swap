/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_add_to_stack_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiasano <hiasano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 20:50:11 by hiasano           #+#    #+#             */
/*   Updated: 2025/01/14 20:57:59 by hiasano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

int	init_add_to_stack_a(t_add_args *args)
{
	*(args->error_dup_int) = malloc(sizeof(int) * args->count_int);
	if (!*(args->error_dup_int))
		return (0);
	*(args->i) = 0;
	*(args->stack_a) = ft_lstnew(args->strs[*(args->i)]);
	if (!ft_error_dup_int(*(args->error_dup_int), (*(args->stack_a))->number,
			*(args->i)))
	{
		free(*(args->error_dup_int));
		ft_free_stack(*(args->stack_a));
		return (0);
	}
	(*(args->i))++;
	return (1);
}

int	loop_add_to_stack_a(t_add_args *args)
{
	t_list	*add_stack;

	while (*(args->i) < args->count_int)
	{
		add_stack = ft_lstnew(args->strs[*(args->i)]);
		if (!add_stack)
		{
			free(*(args->error_dup_int));
			(*(args->i))++;
			return (0);
		}
		ft_lstadd_back(args->stack_a, add_stack);
		(*(args->i))++;
		if (!ft_error_dup_int(*(args->error_dup_int), add_stack->number,
				*(args->i)))
		{
			free(*(args->error_dup_int));
			ft_free_stack(*(args->stack_a));
			return (0);
		}
	}
	return (1);
}
