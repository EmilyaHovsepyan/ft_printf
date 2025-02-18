SRCS = ft_print_char.c ft_print_dec.c ft_print_str.c ft_print_uns.c \
       ft_print_xup.c ft_print_x.c ft_printf.c ft_print_p.c \

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

LIBC = ar rcs

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
