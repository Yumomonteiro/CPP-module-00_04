NAME = ClapTrap

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
	
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 # -g -fsanitize=address

all: $(NAME)

$(NAME): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

.SILENT: