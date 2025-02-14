/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiasano <hiasano@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 21:45:54 by hiasano           #+#    #+#             */
/*   Updated: 2025/01/07 21:45:57 by hiasano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf/include/ft_printf.h"
#include "./libft/libft.h"

int	ft_print_error(int errnum)
{
	if (errnum == 1)
	{
		ft_printf("Error\n");
	}
	return (0);
}

int	ft_error_dup_int(int chkbox[], int number, int j)
{
	int	i;

	i = 0;
	while (1 < j)
	{
		if (chkbox[i] == number)
		{
			ft_printf("Error\n");
			return (0);
		}
		i++;
		j--;
	}
	chkbox[i] = number;
	return (1);
}

int	ft_error_intcheck(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != ' ' && str[i] != '-')
		{
			ft_printf("Error\n");
			return (0);
		}
		if (str[i] == '-' && (i != 0 && str[i - 1] != ' '))
		{
			ft_printf("Error\n");
			return (0);
		}
		i++;
	}
	return (1);
}
