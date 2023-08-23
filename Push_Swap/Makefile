NAME = push_swap

SRC	= push_swap.c check_arg.c utils.c general_algorithm.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror -I./Include
all: makelib $(NAME)

$(NAME): $(OBJ)
	cc $(CFLAGS) $(OBJ) ./libft/libft.a -o $(NAME)

makelib: 
	$(MAKE) -C ./libft 

%.o: %.c libft.h push_swap.h Makefile
	cc $(CFLAGS) -c $@ -o $< 

re: fclean all

makefclean:
	$(MAKE) -C ./libft fclean
clean:
	rm -rf $(OBJ) 

fclean: clean makefclean
	rm -rf $(NAME)

.PHONY: all re clean fclean bonus