
INCLUDE	= ./include
NAME	= hiroki.a
SRCS	= \


OBJS	= $(SRCS:.c=.o)
CC		= cc
CFLG	= -Wall -Wextra -Werror

LIBFT_PATH = ./libft
LIBFT_NAME = libft.a

$(NAME):
		make -C $(LIBFT_PATH) $(OBJS)
				cp	$(LIBFT_PATH)/$(LIBFT_NAME)	$(NAME)
		ar rc $(NAME) $(OBJS)



all:$(NAME)

.c.o:
	$(CC) $(CFLG) -I $(INCLUDE) -c $< -o $@
clean:
	rm -f $(OBJS)
	@make -C $(LIBFT_PATH) clean
fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT_PATH)/$(LIBFT_NAME)

re: fclean all

.PHONY: all clean fclean re
	

