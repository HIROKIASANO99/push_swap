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
//	ft_lstnewにatoi関数を入れた

	stack_a = ft_lstnew(argv[i]);
	printf("中身 = %d\n", stack_a->number);
	while(i < argc - 1)
		{
			add_stack = ft_lstnew(argv[i + 1]);
			printf("中身 = %d\n", add_stack->number);
			ft_lstadd_back(&stack_a, add_stack);
			i++;
		}
	while (stack_a->next)
	{
		printf("%d\n", stack_a->number);
	printf("-------------\n");
		stack_a = stack_a->next;
	}
	printf("%d\n", stack_a->number);
	return(0);
}

