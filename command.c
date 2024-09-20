
#include "./libft/libft.h"
#include"./ft_printf/include/ft_printf.h"

ft_command_swap(t_list **node)
{
	t_list *current_node;

	if(!node || !*node)
		return(0);
	current_node = *node ;
	*node = node->next;
	*node = current_node;
	current_node->next = *node; 
	return(0);
}

ft_command_push(t_list **ipstack, t_list **opstack)
{
	t_list *temp;
	if(!opstack || !*opstack)
		return;
	temp = *opstack;
	*opstack = (*opstack)->next;
	temp->next = NULL;
	ft_lstadd_back(ipstack, temp);
	return(0);
}

t_list *ft_command_rotate(t_list **stack)
{
	t_list *temp;
	t_list *firstnode;
	
	temp = *stack;
	temp->next = NULL;
	firstnode = (*stack)->next;
	*stack = ft_lstlast(stack);
	stack->next = temp;
	return(firstnode);
}

ft_command_reverse_rotate(t_list **stack)
{
	
}
