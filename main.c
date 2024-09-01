#include"./include/push_swap.h"
#include"./libft/libft.h"
#include"./ft_printf/include/ft_printf.h"
#include<stdio.h>

int main(int argc, char **argv)
{
	int i;
	t_list *stack_a;
	t_list *add_stack;

	if(argc < 2)
		return(0);
	if(argc == 2)
	{
		stack_a = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		stack_a = ft_lstnew(argv[i]);
		while(i < argc - 1)
			{
				add_stack = ft_lstnew(argv[i + 1]);
				ft_lstadd_back(&stack_a, add_stack);
				i++;
			}
		ft_chkdupint(stack_a);
	}
	return(0);
}

