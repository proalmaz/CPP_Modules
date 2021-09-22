NAME	=	MyCharacter

SRC		=	main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \
			DiamondTrap.cpp \

CC		=	clang++

FLAGS	=	-Wall -Wextra -Werror -Wshadow -Wno-shadow

OBJS	=	${SRC:.cpp=.o}

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

run: fclean all
	make clean && clear && ./$(NAME)

.PHONY: all clean fclean re