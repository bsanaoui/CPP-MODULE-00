NAME = Megaphone

CC = gc
FLAGS = -Werror -Wextra -Wall

SRC = megaphone.cpp

all : $(NAME)

$(NAME) : $(SRC)
	@$(CC) $(SRC) $(FLAG) $(NAME)

fclean : clean
	@rm -f $(NAME)

clean :
	@rm -f *.o

re : fclean all