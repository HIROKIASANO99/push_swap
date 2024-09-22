#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H


#include"../libft/libft.h"
#include"../ft_printf/include/ft_printf.h"
#include<unistd.h>
#include<stdlib.h>

//command.c
void	ft_command_swap(t_list *node);
void	ft_command_push(t_list *inputstack, t_list *outputstack);
void	ft_command_rotate(t_list **stack);

//sort.c
void	ft_sortstack(t_list *stack_a);

#endif

