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

t_list *ft_lstnew(void *content)
{
	t_list	*new;
	
	new=(t_list *)malloc(sizeof(t_list));
	if(!new)
		return (NULL);
	new->number = ft_atoi((char *)content);
	new->next = NULL;
	printf("999中身 = %d\n", new->number);
	return(new);
}
