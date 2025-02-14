/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiasano <hiasano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 21:46:58 by hiasano           #+#    #+#             */
/*   Updated: 2025/02/14 23:59:18 by hiasano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

int	ft_group_noting(t_list **stack_a)
{
	t_list	*head;

	head = *stack_a;
	while (*stack_a != NULL)
	{
		(*stack_a)->group = 1;
		*stack_a = (*stack_a)->next;
	}
	*stack_a = head;
	return (42);
}

void	ft_group_catgory2(t_group_args *ga)
{
	while (*(ga->curint) <= ga->count_str)
	{
		if ((*(ga->stack_a))->order == *(ga->curint))
		{
			(*(ga->stack_a))->group = *(ga->i);
			(*(ga->div_six_size))--;
			if (*(ga->div_six_size) == 0)
			{
				(*(ga->i))++;
				*(ga->div_six_size) = ga->ori_size;
				if (*(ga->i) == 6)
					*(ga->div_six_size) += (ga->count_str % 6);
			}
			(*(ga->curint))++;
			*(ga->stack_a) = ga->head;
			continue ;
		}
		*(ga->stack_a) = (*(ga->stack_a))->next;
	}
}

void	ft_group_catgory(t_list **stack_a, int count_str)
{
	t_gcvars		v;
	t_group_args	ga;
	
	if(count_str == 0)
		return;
	v.head = *stack_a;
	v.div_six_size = count_str / 6;
	v.ori_size = v.div_six_size;
	v.i = 1;
	v.curint = 1;
	if (v.div_six_size == 0)
		v.curint = ft_group_noting(stack_a);
	ga.stack_a = stack_a;
	ga.head = v.head;
	ga.count_str = count_str;
	ga.ori_size = v.ori_size;
	ga.div_six_size = &v.div_six_size;
	ga.i = &v.i;
	ga.curint = &v.curint;
	ft_group_catgory2(&ga);
}

int	add_to_stack_a(int count_int, char **strs, t_list **stack_a)
{
	int			i;
	int			*error_dup_int;
	t_add_args	args;

	args.count_int = count_int;
	args.strs = strs;
	args.stack_a = stack_a;
	args.error_dup_int = &error_dup_int;
	args.i = &i;
	if (!init_add_to_stack_a(&args))
		return(0);
	if (!loop_add_to_stack_a(&args))
		return(0);
	ft_check_a(*stack_a);
	free(error_dup_int);
	return (count_int);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	char	**strs;
	int		count_str;

	if (argc < 2)
		return (0);
	stack_a = NULL;
	count_str = 0;
	strs = NULL;
	if (argc == 2)
	{
		strs = ft_split(argv[1], ' ', &count_str);
		count_str = add_to_stack_a(count_str, strs, &stack_a);
	}
	else
	{
		argv++;
		count_str = add_to_stack_a(argc - 1, argv, &stack_a);
	}
//	if (count_str == 0)
//		ft_free_stack(stack_a);
	if (count_str == 3 || count_str == 5)
		ft_min_sort(&stack_a, count_str);
	ft_group_catgory(&stack_a, count_str);
	ft_sortstack(stack_a, count_str, strs);
	return (0);
}
