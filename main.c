#include"./include/push_swap.h"
#include"./libft/libft.h"
#include"./ft_printf/include/ft_printf.h"
#include<stdio.h>

void add_to_stack_a(int argc, char **strs, t_list **stack_a)
{
	int i;
	t_list *add_stack;
	i = 0;
	printf("文字列[%d]  ",i);
	*stack_a = ft_lstnew(strs[i]);
	i++;
	printf("argc=%d\n",argc);
	while(i < argc)
		{
			printf("文字列[%d]  ",i);
			add_stack = ft_lstnew(strs[i]);
			ft_lstadd_back(stack_a, add_stack);
			i++;
		}
	return;
}
int main(int argc, char **argv)
{
	t_list *stack_a;
	char	**strs;
	int		count_str;

	if(argc < 2)
		return(0);
	stack_a = NULL;
	count_str = 0;
	if(argc == 2)
	{
	printf("main---------------\n");
		strs = ft_split(argv[1], ' ', &count_str); 
	printf("main---------------\n");
		add_to_stack_a(count_str, strs, &stack_a);
	printf("main---------------\n");
	}
	else
	{
		argv++;
		add_to_stack_a(argc - 1, argv, &stack_a);
	}
	printf("count_str=%d\n" ,count_str);
	printf("\n\n");
	while(stack_a != NULL)
	{
		ft_printf("stack_a_number ==%d\n",stack_a->number);
		stack_a = stack_a->next;
	}
	return(0);
}

