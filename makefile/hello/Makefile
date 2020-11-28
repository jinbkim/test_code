##########################
# 코드를 단순화 시킬 macro 작성
##########################
SRC		= $(wildcard *.c)
OBJ		= $(SRC:.c=.o)

NAME	= make_hello
RM		= rm -rf
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -g -fsanitize=address


#####################
# target : dependency 
#	command
#####################
all 	: $(NAME)

clean	:
		$(RM) $(OBJ) *.gch *.out

fclean	: clean
		$(RM) $(NAME)

re		: fclean all

$(NAME) : $(OBJ)