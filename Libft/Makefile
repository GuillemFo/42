NAME = libft.a

SRC	=	ft_isalnum.c\
		ft_isalpha.c\
		ft_isprint.c\
		ft_strrchr.c\
		ft_isascii.c\
		ft_strchr.c \
		ft_tolower.c\
		ft_isalnum.c\
		ft_isdigit.c\
		ft_strlen.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_toupper.c\
		ft_memset.c\
		ft_bzero.c\
		ft_strncmp.c\
		ft_memcpy.c\
		ft_memchr.c\
		ft_memmove.c\
		ft_memcmp.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c

OBJ = $(SRC:.c=.o)
CFLAGS += -Wall -Wextra -Werror -I./libft.h
$(NAME): $(OBJ) libft.h
	ar -crs $(NAME) $(OBJ) 
all: $(NAME)

re: fclean all

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

.PHONY: add re clean fclean