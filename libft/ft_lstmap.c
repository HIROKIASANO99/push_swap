/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiasano <hiasano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 20:48:40 by hiasano           #+#    #+#             */
/*   Updated: 2025/01/08 20:48:45 by hiasano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*add_lst;
	t_list	*result_lst;

	add_lst = NULL;
	result_lst = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst->next != NULL)
	{
		add_lst = ft_lstnew(f(lst->content));
		if (add_lst == NULL)
		{
			ft_lstclear(&result_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&result_lst, add_lst);
		lst = lst->next;
	}
	return (result_lst);
}
