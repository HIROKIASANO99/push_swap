#include"./include/push_swap.h"
#include"./libft/libft.h"
#include<stdio.h>
int main(int argc, char **argv)
{
	int i;
	int num;
	t_list *stack_a;
	t_list *add_stack;

	i = 1;
	num = 0;
	if(argc < 2)
		return(0);
	stack_a = ft_lstnew(argv[i]);
	stack_a->number=ft_atoi(stack_a->content);
	while(i < argc - 1)
		{
			add_stack = ft_lstnew(argv[i + 1]);
			add_stack->number = ft_atoi(add_stack->content);
			ft_lstadd_back(&stack_a, add_stack);
			i++;
		}
	while (stack_a->next)
	{
		printf("%s\n", (char *)stack_a->content);
		stack_a = stack_a->next;
	}
	printf("%s\n", (char *)stack_a->content);
	return(0);
}

