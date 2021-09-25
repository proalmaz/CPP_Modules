NAME	=	VirtualTasks

SRC		=	main.cpp \
			Animal.cpp \
			Cat.cpp \
			Dog.cpp \
			Brain.cpp \

CC		=	clang++

FLAGS	=	-Wall -Wextra -Werror

OBJS	=	${SRC:.cpp=.o}

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS) $(WRONG_OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

run: fclean all
	make clean && clear && ./$(NAME)

.PHONY: all clean fclean re