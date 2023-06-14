NAME = libftprintf.a

SRC =	ft_printf.c \
		ft_printnbr.c \
		ft_printstring.c \
		ft_printhex.c 

OBJ = $(SRC::.c=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ) ft_printf.h
	ar -crs $(NAME) $(OBJ)

%.o: %.c ft_printf.h Makefile
	cc $(CFLAGS) -c $< -o $@

re: fclean all

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

.PHONY: all re clean fclean