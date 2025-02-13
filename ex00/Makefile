CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98
SRC			= main.cpp newZombie.cpp randomChump.cpp \
				src/Zombie.cpp
OBJ			= $(SRC:.cpp=.o)
NAME		= braiiiiiiinnnzzzZ

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re