/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiasano <hiasano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:08:03 by hiasano           #+#    #+#             */
/*   Updated: 2024/08/21 20:08:39 by hiasano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *list;

	if(*lst == NULL || new == NULL)
		return;
	list = *lst;
	int i = 1;
	while(list->next != NULL)
	{

if(list->number > new->number)
	list->order++;
if(list->number < new->number)
	new->order++;
		printf("list[%d] = list->number = %d ---- list->order ==%d\n",i,list->number,list->order);
		list = list->next;
		i++;

	}
if(list->number > new->number)
	list->order++;
if(list->number < new->number)
	new->order++;
		printf("list[%d] == list->number = %d ---- list->order ==%d\n",i,list->number,list->order);
		printf("list[%d] == list->number = %d ---- list->order ==%d\n",i + 1,new->number,new->order);
	list->next = new; 
	return;
}

//if(list->number > new->number)
//	list->order++;
//if(list->number < new->number)
//	new->reder++;
