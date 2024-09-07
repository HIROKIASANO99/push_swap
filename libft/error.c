#include"../include/push_swap.h"
#include "libft.h"

int ft_error_strcheck(const char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		if((str[i] < '0' || str[i] > '9') && str[i] != ' ')
		{
			ft_printf("Error\n");
			return(0);
		}
		i++;
	}
	return(1);
}
//ft_chkdupint(t_size *stack_a)
//{
//	while(stack_a)
//	stack_a->number:
//}
