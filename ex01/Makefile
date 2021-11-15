NAME = PhoneBook

CC = clang++
FLAGS = -Werror -Wextra -Wall -std=c++98

SRC = main.cpp contact.cpp PhoneBook.cpp

all : $(NAME)

$(NAME) : $(SRC)
	@$(CC) $(SRC) $(FLAG) -o $(NAME)

fclean : clean
	@rm -f $(NAME)

clean :

re : fclean all