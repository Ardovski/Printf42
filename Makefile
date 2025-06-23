# Compiler ve flags
CC      = cc
CFLAGS  = -Wall -Wextra -Werror

# Dosya isimleri
NAME    = libftprintf.a
SRCS = ft_printf.c ft_char.c ft_number.c ft_hex.c ft_pointer.c
OBJS    = $(SRCS:.c=.o)
INCS    = ft_printf.h

# Kural: Varsayılan hedef
all: $(NAME)

# Arşiv oluşturulması sadece objeler güncelse olur
$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

# .c -> .o çevirimi
%.o: %.c $(INCS)
	$(CC) $(CFLAGS) -c $< -o $@

# Temizlik komutları
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
