#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H


#include"../libft/libft.h"
#include"../ft_printf/include/ft_printf.h"
#include<unistd.h>
#include<stdlib.h>

//main.c
void	ft_group_catgory(t_list	**stack_a ,int count_str);

//command.c
void	ft_command_swap(t_list *node);
void	ft_command_push(t_list **inputstack, t_list **outputstack);
void	ft_command_rotate(t_list **stack);

//sort.c
void	ft_sortstack(t_list *stack_a);
void	ft_first_sort(t_list **stack_a, t_list **stack_b ,int top, int bottom);
//デバック
void print_list(t_list *lst, char c);									
#endif

