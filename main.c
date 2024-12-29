#include"./include/push_swap.h"

int ft_group_noting(t_list **stack_a)
{
	t_list *head;

	head = *stack_a;
	while(*stack_a != NULL)
	{
		(*stack_a)->group = 1;
		*stack_a =(*stack_a)->next;
	}
	*stack_a = head;
	return(42);
}

void    ft_group_catgory2(t_list **stack_a, t_list *head, int count_str, int ori_size, int *div_six_size, int *i, int *curint)
{
    while (*curint <= count_str)
    {
        if ((*stack_a)->order == *curint)
        {
            (*stack_a)->group = *i;
            (*div_six_size)--;
            if (*div_six_size == 0)
            {
                (*i)++;
                *div_six_size = ori_size;
                if (*i == 6)
                    *div_six_size += (count_str % 6);
            }
            (*curint)++;
            *stack_a = head;
            continue;
        }
        *stack_a = (*stack_a)->next;
    }
}

void    ft_group_catgory(t_list **stack_a, int count_str)
{
    t_list *head;
    int     div_six_size;
    int     ori_size;
    int     i;
    int     curint;

    head = *stack_a;
    div_six_size = count_str / 6;
    ori_size = div_six_size;
    i = 1;
    curint = 1;
    if (div_six_size == 0)
        curint = ft_group_noting(stack_a);
    ft_group_catgory2(stack_a, head, count_str, ori_size, &div_six_size, &i, &curint);
}



int add_to_stack_a(int count_int, char **strs, t_list **stack_a)
{
	int i;
	t_list *add_stack;
	int error_dup_int[count_int];
	
	i = 0;
	*stack_a = ft_lstnew(strs[i]);
	if(!ft_error_dup_int(error_dup_int ,(*stack_a)->number, i))
		return(0);
	i++;
	while(i < count_int)
	{
		add_stack = ft_lstnew(strs[i]);
		if(!add_stack)
		{
			i++;
			return(0);
		}
		ft_lstadd_back(stack_a, add_stack);		
		i++;
		if(!ft_error_dup_int(error_dup_int , add_stack->number, i))
			return(0);
	}
	ft_check_a(*stack_a);
	return(count_int);
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
		strs = ft_split(argv[1], ' ', &count_str); 
		count_str = add_to_stack_a(count_str, strs, &stack_a);
	}
	else
	{
		argv++;
		count_str = add_to_stack_a(argc - 1, argv, &stack_a);
	}
	if(count_str == 0)
		return(0);
	if(count_str == 3 || count_str == 5)
		ft_min_sort(&stack_a ,count_str);
	ft_group_catgory(&stack_a,count_str);
//print_list(stack_a, 'a');									
	ft_sortstack(stack_a, count_str);
	return(0);
}

