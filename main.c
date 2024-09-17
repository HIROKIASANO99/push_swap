#include"./include/push_swap.h"

int add_to_stack_a(int count_int, char **strs, t_list **stack_a)
{
	int i;
	t_list *add_stack;
	int error_dup_int[count_int];

	
	i = 0;
	*stack_a = ft_lstnew(strs[i]);
	printf("------------\n");
	if(!ft_error_dup_int(error_dup_int ,(*stack_a)->number, i))
		{
	printf("------------\n");
		return(0);
		}
	i++;
	while(i < count_int)
		{
			add_stack = ft_lstnew(strs[i]);
			if(!add_stack)
				{
					i++;
					continue;
				}
			ft_lstadd_back(stack_a, add_stack);
			
			i++;
			if(!ft_error_dup_int(error_dup_int , add_stack->number, i))
				return(0);
		}
		printf("count_int = %d\n",count_int);
	return(1);
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
		if(!add_to_stack_a(count_str, strs, &stack_a))
			return(0);
	}
	else
	{
		argv++;
		if(!add_to_stack_a(argc - 1, argv, &stack_a))
			return(0);
	}

	while(stack_a != NULL)
	{
		ft_printf("stack_a_number ==%d\n",stack_a->number);
		stack_a = stack_a->next;
	}
	return(0);
}

