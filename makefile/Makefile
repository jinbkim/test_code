##########################
# 코드를 단순화 시킬 macro 작성
##########################
NAME		= test
HELLO		= hello
BYE			= bye
MAIN		= main
OBJ			= *.o
RM			= rm -rf
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -g -fsanitize=address
DIR_OBJ		= ./obj



#####################
# target : dependency 
#	command
#####################
all 		: $(NAME)

clean		:
			$(RM) $(OBJ) *.gch *.out
			make clean -C $(HELLO)
			make clean -C $(BYE)
			make clean -C $(MAIN)
			$(RM) $(DIR_OBJ)

fclean		: clean
			$(RM) $(NAME)

re			: fclean all

$(NAME) 	: $(DIR_OBJ)
			make -C $(HELLO)
			make -C $(BYE)
			make -C $(MAIN)
			mv $(HELLO)/$(OBJ) $(DIR_OBJ)
			mv $(BYE)/$(OBJ) $(DIR_OBJ)
			mv $(MAIN)/$(OBJ) $(DIR_OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(DIR_OBJ)/$(OBJ)

$(DIR_OBJ)	:
			mkdir $(DIR_OBJ)