/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiasano <hiasano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:30:10 by hiasano           #+#    #+#             */
/*   Updated: 2024/08/21 20:15:45 by hiasano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	skip_and_minus_cheak(int sign, const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	return (sign);
}

static int	check_overflow(long long num)
{
	if ((num > INT_MAX) || (INT_MIN > num))
	{
		return (0);
	}
	return (1);
}

int ft_ovfg(int *i_ovfg)
{
	*i_ovfg = 1;
	ft_printf("Error\n");
	return(0);
}

int	ft_atoi(char *str,int *i_ovfg)
{
	int			i;
	int			sign;
	long long	num;

	i = 0;
	sign = 1;
	num = 0;
	sign = skip_and_minus_cheak(sign, str);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '0' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
			return(ft_ovfg(i_ovfg));
while ('0' <= str[i] && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
		if (!check_overflow(num))
			return(ft_ovfg(i_ovfg));
	}
	if (num == 0 && sign - 1)
			return(ft_ovfg(i_ovfg));
	return (sign * (num));
}

// int main() {
//      char *str2 = "1234";
//      char *str3 = "2147483649";
//      char *str = "-2147483649";
//
//     int num = atoi(str);
////	int num2 = atoi(str2);
////	int num3 = atoi(str3);
//
//	printf("str:		%s\n",str);
//	printf("Number:	%d\n", num);
////	printf("Number2: %d\n", num2);
////	printf("Number3: %d\n", num3);
//
//     int ft_num = ft_atoi(str);
////	int ft_num2 = ft_atoi(str2);
////	int ft_num3 = ft_atoi(str3);
//
//     printf("ft_Number:	%d\n", ft_num);
////     printf("ft_Number2: %d\n", ft_num2);
////     printf("ft_Number3: %d\n", ft_num3);
//
//     return (0);
// }
