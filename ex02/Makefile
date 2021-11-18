NAME = Account

CC = clang++
FLAGS = -Werror -Wextra -Wall

SRC = tests.cpp Account.cpp

all : $(NAME)

$(NAME) : $(SRC)
	@$(CC) $(SRC) $(FLAG) -o $(NAME)

fclean : clean
	@rm -f $(NAME)

clean :

re : fclean all