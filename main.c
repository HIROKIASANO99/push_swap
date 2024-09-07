#include"./include/push_swap.h"

void add_to_stack_a(int argc, char **strs, t_list **stack_a)
{
	int i;
	t_list *add_stack;
	i = 0;
	*stack_a = ft_lstnew(strs[i]);
	i++;
	while(i < argc)
		{
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
		return(ft_printf("Error\n"));
	stack_a = NULL;
	count_str = 0;
	if(argc == 2)
	{
		strs = ft_split(argv[1], ' ', &count_str); 
		add_to_stack_a(count_str, strs, &stack_a);
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

