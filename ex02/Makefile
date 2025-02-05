NAME = ex02
TEST = 42test
FLAG = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp
42SRC = main_test.cpp
OBJ = $(SRC:.cpp=.o)
42OBJ = $(42SRC:.cpp=.o)
CC = c++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAG) -o $(NAME) $(OBJ)

$(TEST): $(42OBJ)
	$(CC) $(FLAG) -o $(TEST) $(42OBJ)

%.o: %.cpp
	$(CC) $(FLAG) -c $< -o $@

clean:
	rm -f $(OBJ)
	rm -f $(42OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(TEST)

re: fclean all

.PHONY: all clean fclean re

