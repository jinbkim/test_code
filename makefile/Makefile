##########################
# 코드를 단순화 시킬 macro 작성
##########################
NAME	= test
HELLO	= hello
BYE		= bye
MAIN	= main
OBJ		= *.o
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
		make clean -C $(HELLO)
		make clean -C $(BYE)
		make clean -C $(MAIN)

fclean	: clean
		$(RM) $(NAME)
		make fclean -C $(HELLO)
		make fclean -C $(BYE)
		make fclean -C $(MAIN)

re		: fclean all

$(NAME) :
		make -C $(HELLO)
		make -C $(BYE)
		make -C $(MAIN)
		$(CC) $(CFLAGS) -o $(NAME) $(HELLO)/$(OBJ) $(BYE)/$(OBJ) $(MAIN)/$(OBJ)