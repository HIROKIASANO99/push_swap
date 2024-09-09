#include"./include/push_swap.h"
#include "./libft/libft.h"

 
int ft_error_dup_int(int chkbox[], int number, int j)
{
	int i;

	i = 0;
printf("number		=%d\n", number); 

	while(1 < j)
	{
		if (chkbox[i] == number)
		{
			ft_printf("Error\n");
			return(0);
		}	
printf("chkbox[%d]	=%d",i , chkbox[i]); 
		i++;	
printf("| j		= %d\n",j); 
		j--;
	}
	chkbox[i] = number; 
printf("chkbox[%d]	=%d\n",i , chkbox[i]); 
printf("\n"); 
	return(1);
}


int ft_error_intcheck(const char *str)
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
