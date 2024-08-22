
INCLUDE	= ./include
NAME	= hiroki.a
SRCS	= \


OBJS	=$(SRCS: .c=.o)
CC		= cc
CFLG	=

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)



all:$(NAME)

.c.o:
	$(CC) $(CFLG) -I $(INCLUDE) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
	

