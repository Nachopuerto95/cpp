CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

SRCS = src/AMateria.cpp src/ICharacter.cpp src/main.cpp
OBJS = $(SRCS:.cpp=.o)


$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f a.out

re: fclean all

.PHONY: all clean fclean re
