/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   group_args.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiasano <hiasano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 20:20:16 by hiasano           #+#    #+#             */
/*   Updated: 2025/01/14 20:59:41 by hiasano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GROUP_ARGS_H
# define GROUP_ARGS_H

typedef struct s_group_args
{
	t_list	**stack_a;
	t_list	*head;
	int		count_str;
	int		ori_size;
	int		*div_six_size;
	int		*i;
	int		*curint;
}			t_group_args;

typedef struct s_gcvars
{
	t_list	*head;
	int		div_six_size;
	int		ori_size;
	int		i;
	int		curint;
}			t_gcvars;

typedef struct s_add_args
{
	int		count_int;
	char	**strs;
	t_list	**stack_a;
	int		**error_dup_int;
	int		*i;
}			t_add_args;

#endif
