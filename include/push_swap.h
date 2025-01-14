/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiasano <hiasano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 21:46:35 by hiasano           #+#    #+#             */
/*   Updated: 2025/01/07 21:46:42 by hiasano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/include/ft_printf.h"
# include "../libft/libft.h"
# include "group_args.h"
# include <stdlib.h>
# include <unistd.h>

// main.c
void	ft_group_catgory(t_list **stack_a, int count_str);

// command.c
void	ft_command_swap(t_list *node);
void	ft_command_push(t_list **inputstack, t_list **outputstack);
void	ft_command_rotate(t_list **stack);
void	ft_command_reverse_rotate(t_list **stack);

// sort.c
void	ft_sortstack(t_list *stack_a, int size);
void	ft_first_sort(t_list **stack_a, t_list **stack_b, int top, int bottom);
void	ft_second_sort(t_list **stack_a, t_list **stack_b, int size);

// sort2.c
void	ft_min_sort(t_list **stack_a, int count_str);
int		ft_order_pattern(t_list **stack_a, int count_str);

//sort3.c
void	rotate_stack_b(t_list **stack_b, int maxnumber, int posi);

// sortint5.c
void	ft_fivesort_first(t_list **stack_a);

// check.c
void	ft_check_a(t_list *stack);

// debug.c
void	print_list(t_list *lst, char c);

// free.c
void	ft_free_stack(t_list *stack);

// error.c
int		ft_print_error(int errnum);
#endif
