CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

SRCS = main.cpp src/Dog.cpp src/Animal.cpp src/Cat.cpp src/WrongAnimal.cpp src/WrongCat.cpp src/Brain.cpp
OBJS = $(SRCS:.cpp=.o)


$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
