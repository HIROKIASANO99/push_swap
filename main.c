#include"./include/push_swap.h"
#include"./libft/libft.h"
#include<stdio.h>
int main(int argc, char **argv)
{
	int i;
	t_list *stack_a;
	t_list *add_stack;

	i = 1;
	
	if(argc < 2)
		return(0);

	stack_a = ft_lstnew(argv[i]);
	while(i < argc - 1)
		{
			add_stack = ft_lstnew(argv[i + 1]);
			ft_lstadd_back(&stack_a, add_stack);
			i++;
		}
	while (stack_a->next)
		stack_a = stack_a->next;
	return(0);
}

