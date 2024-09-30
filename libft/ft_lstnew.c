/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiasano <hiasano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:12:28 by hiasano           #+#    #+#             */
/*   Updated: 2024/08/21 20:12:29 by hiasano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include"../include/push_swap.h"
#include"../ft_printf/include/ft_printf.h"

t_list *ft_lstnew(void *content)
{
	t_list	*new;
	
	if(!ft_error_intcheck(content))
		return(NULL);
	new=(t_list *)malloc(sizeof(t_list));
	if(!new)
		return (NULL);
	new->number = ft_atoi((char *)content);
	new->order = 1;
	new->next = NULL;
//				printf("new->number=%d\n" ,new->number);
	return(new);
}
