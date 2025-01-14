
#ifndef GROUP_ARGS_H
# define GROUP_ARGS_H

typedef struct s_group_args
{
	t_list	**stack_a;
	t_list	*head;
	int		count_str;
	int		ori_size;
	int		*div_six_size;
	int		*i;
	int		*curint;
}			t_group_args;

typedef struct s_gcvars
{
	t_list	*head;
	int		div_six_size;
	int		ori_size;
	int		i;
	int		curint;
}	t_gcvars;

#endif
