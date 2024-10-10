
#include "./libft/libft.h"
#include"./ft_printf/include/ft_printf.h"
#include"./include/push_swap.h"


void	ft_first_sort(t_list **stack_a, t_list **stack_b ,int top, int bottom)
{
	t_list **current ;
	current = stack_a;
	while(*current != NULL)
	{
		if((*current)->group == bottom)
		{
			ft_command_push(stack_b, current);
			ft_printf("pb\n");
			ft_command_rotate(stack_b);
			ft_printf("rb\n");
		}
		else if((*current)->group == top)
		{
			ft_command_push(stack_b, current);
			ft_printf("pb\n");	
		}
		else
		{
			current = &(*current)->next;
			ft_printf("ra\n");	
		}
	}
}

//デバック用関数
//______________________________________________________________________________________________________//
//------------------------------------------------------------------------------------------------------//
void print_list(t_list *lst, char c)									
{													
    int index = 1;											
    while (lst != NULL)											
    {													
        printf("stack_%c[%d]	: number = %d	: order = %d	: group = %d	:address = %p\n",			
               c, index, lst->number, lst->order, lst->group, lst->next);						
        lst = lst->next;										
        index++;											
    }													
}													
//------------------------------------------------------------------------------------------------------//
//------------------------------------------------------------------------------------------------------//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

void	ft_sortstack(t_list *stack_a)
{
//	t_address *address_a; 
	t_list *stack_b;	
	stack_b = NULL;
	//address_a.head = stack_a;
	ft_first_sort(&stack_a, &stack_b, 4, 3);
	ft_first_sort(&stack_a, &stack_b, 5, 2);
	ft_first_sort(&stack_a, &stack_b, 6, 1);
//	print_list(stack_a, 'a');
//	printf("\n");
//	print_list(stack_b, 'b');
}
