
NAME		=	rush-02

SRC_FILES	=	main.c ft_atoi.c parse_dict.c

OBJ			=	$(SRC_FILES:.c=.o)

HDRS		=	header.h

CC 			= cc 
FLAGS 		= -Wall -Werror -Wextra -I $(HDRS)
		
%.o:		%.c
			$(CC) $(FLAGS) -c $< -o $@

all:	    $(NAME) 

$(NAME):	$(OBJ)  
			$(CC) $(FLAGS) -o $(NAME) $(OBJ)  
clean:
			rm -f $(OBJ) 
fclean:		clean 
			rm -f $(NAME)
re:			fclean all

.PHONY: clean all  

