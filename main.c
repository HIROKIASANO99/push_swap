#include"./include/push_swap.h"
#include"./libft/libft.h"
#include<stdio.h>
int main(int argc, char **argv)
{
	int i;
	int j;
	int num;
	int *stack_a;

	i = 0;
	num = 0;
	
	stack_a =(int*)malloc(sizeof(int) * (argc - 1));
	if(!stack_a)
		return(0);
	while(i < argc - 1)
		{
			num = ft_atoi(argv[i + 1]);
			stack_a[i] = num;
			i++;
		}
	j = 0;
	while(i != j)
		{
			printf("%d\n",stack_a[j]);
			j++;
		}
	free(stack_a);
}
