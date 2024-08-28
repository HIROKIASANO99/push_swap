
INCLUDE	= ./include
NAME	= p_w
SRCS	= \
		main.c
OBJS	= $(SRCS:.c=.o)
CC		= cc
CFLG	= -Wall -Wextra -Werror

LIBFT_PATH = ./libft
LIBFT_NAME = libft.a

$(NAME): $(OBJS) 
		make -C $(LIBFT_PATH) bonus 
				cp	$(LIBFT_PATH)/$(LIBFT_NAME) .
		$(CC) $(CFLG) $(OBJS) $(LIBFT_NAME) -o $(NAME)



all:$(NAME)

.c.o:
	$(CC) $(CFLG) -I$(INCLUDE) -c $< -o $@
clean:
	rm -f $(OBJS)
	@make -C $(LIBFT_PATH) clean
fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT_NAME) $(NAME)
	rm -f $(LIBFT_PATH)/$(LIBFT_NAME) $(NAME)

re: fclean all

.PHONY: all clean fclean re
	

