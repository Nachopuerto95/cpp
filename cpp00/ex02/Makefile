CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = src/Account.cpp tests.cpp
OBJ = $(SRC:.cpp=.o)
NAME = dream


$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
