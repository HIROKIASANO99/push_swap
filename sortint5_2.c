#include "./include/push_swap.h"

void	ft_fivesort_4th(int box[])
{
	if (box[4] == 1)
	{
		if (box[0] == 2)
			ft_printf("rra\npb\npb\n");
		if (box[1] == 2)
			ft_printf("rra\npb\nrra\npb\nrb\n");
		if (box[2] == 2)
			ft_printf("rra\npb\nrra\nrra\npb\n");
		if (box[3] == 2)
			ft_printf("rra\npb\nrra\npb\n");
	}
	return ;
}

void	ft_fivesort_3rd(int box[])
{
	if (box[2] == 1)
	{
		if (box[0] == 2)
			ft_printf("pb\nra\npb\nrb\n");
		if (box[1] == 2)
			ft_printf("ra\nsa\npb\npb\n");
		if (box[3] == 2)
			ft_printf("ra\nra\npb\npb\n");
		if (box[4] == 2)
			ft_printf("ra\nra\npb\nra\npb\n");
	}
	if (box[3] == 1)
	{
		if (box[0] == 2)
			ft_printf("pb\nra\nra\npb\nrb\n");
		if (box[1] == 2)
			ft_printf("ra\npb\nra\npb\nrb\n");
		if (box[2] == 2)
			ft_printf("rra\nrra\npb\nrra\npb\n");
		if (box[4] == 2)
			ft_printf("rra\nrra\npb\npb\n");
	}
	return ;
}

void	ft_fivesort_2nd(int box[])
{
	if (box[0] == 1)
	{
		if (box[1] == 2)
			ft_printf("pb\npb\n");
		if (box[2] == 2)
			ft_printf("pb\nra\npb\n");
		if (box[3] == 2)
			ft_printf("pb\nra\nra\npb\n");
		if (box[4] == 2)
			ft_printf("pb\nrra\npb\n");
	}
	if (box[1] == 1)
	{
		if (box[0] == 2)
			ft_printf("pb\npb\nsb\n");
		if (box[2] == 2)
			ft_printf("ra\npb\npb\n");
		if (box[3] == 2)
			ft_printf("ra\npb\nra\npb\n");
		if (box[4] == 2)
			ft_printf("ra\npb\nra\nra\npb\n");
	}
	return ;
}

