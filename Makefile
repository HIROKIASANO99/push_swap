
INCLUDE	= ./include
NAME	= hiroki.a
SRCS	= \


OBJS	=$(SRCS: .c=.o)
CC		= cc
CFLG	=

LIBFT_PATH = ./libft
LIBFT_NAME = libft.a

$(NAME): $(OBJS)
		make -C$(LIBFT_PATH) all
			cp	$(LIBFT_PATH)/$(LIBFT_NAME)	$(NAME)
		ar rc $(NAME) $(OBJS)



all:$(NAME)

.c.o:
	$(CC) $(CFLG) -I $(INCLUDE) -c $< -o $@
clean:
	rm -f $(OBJS)
	@make -c $(LIBFT_PATH) clean
fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT_PATH)/$(LIBFT_NAME)
re: fclean all

.PHONY: all clean fclean re
	

