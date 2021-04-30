##########################
# 코드를 단순화 시킬 macro 작성
##########################
SRC			= $(wildcard *.c)
OBJ			= $(SRC:.c=.o)
DIR_HEAD	= ../inc

NAME		= make_hello
RM			= rm -rf
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -g -fsanitize=address -I $(DIR_HEAD)


#####################
# target : dependency 
#	command
#####################
all 		: $(NAME)

clean		:
			$(RM) $(OBJ) *.gch *.out

fclean		: clean
			$(RM) $(DIR_HEAD) $(NAME)

re			: fclean all

$(NAME) 	: $(OBJ)