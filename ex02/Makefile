NAME = Claptrap

SRCS =	main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\
		FragTrap.cpp\

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98 -g


OBJ=$(SRCS:.cpp=.o)

%.o:%.cpp
	c++ $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all 

.PHONY : all clean fclean re 
