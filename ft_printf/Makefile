NAME = libftprintf.a

SRC = 


OBJ = $(SRC::.c=.o)

CFLAGS = -Wall -Werror -Wextra
all: $(NAME)

%.o: %.c #replace with .h# Makefile
	cc $(CFLAGS) -c $< -o $@

re: fclean all

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

.PHONY: all re clean fclean