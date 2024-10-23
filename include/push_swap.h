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
void	ft_command_reverse_rotate(t_list **stack);

//sort.c
void	ft_sortstack(t_list *stack_a, int size);
void	ft_first_sort(t_list **stack_a, t_list **stack_b , int top, int bottom);
void	ft_second_sort(t_list **stack_a, t_list **stack_b ,int size);

//sort2.c
void ft_min_sort(t_list **stack_a ,int count_str);
int ft_order_pattern(t_list **stack_a, int count_str);

//sortint5.c
int ft_fivesort_1st(t_list **stack_a);

//check.c
void	ft_check_a(t_list *stack);

//debug.c
void print_list(t_list *lst, char c);									
#endif

