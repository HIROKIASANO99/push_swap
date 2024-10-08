
#include "./libft/libft.h"
#include"./ft_printf/include/ft_printf.h"
#include"./include/push_swap.h"


void	ft_first_sort(t_list **stack_a, t_list **stack_b)
{
	t_list **current ;
	current = stack_a;
	while(*current != NULL)
	{
		if((*current)->group == 3)
		{
			ft_command_push(stack_b, current);
			ft_command_rotate(stack_b);
		}
		else if((*current)->group == 4)
			ft_command_push(stack_b, current);
		else
			current = &(*current)->next;
		
	}
}

//デバック用関数
void print_list(t_list *lst, char c)
{
    int index = 1;
    while (lst != NULL)
    {
        printf("stack_%c[%d]	: number = %d	: order = %d	: group = %d\n",
               c, index, lst->number, lst->order, lst->group);
        lst = lst->next;
        index++;
    }
}

void	ft_sortstack(t_list *stack_a)
{
	t_list *stack_b;		
	ft_first_sort(&stack_a, &stack_b);
	print_list(stack_a, 'a');
	print_list(stack_b, 'b');
}
