CC      = cc
CFLAGS  = #-Wall -Wextra -Werror

NAME    = libftprintf.a
SRCS 	= ft_printf.c ft_char.c ft_number.c ft_hex.c ft_pointer.c
OBJS    = $(SRCS:.c=.o)
INCS    = ft_printf.h

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(INCS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
