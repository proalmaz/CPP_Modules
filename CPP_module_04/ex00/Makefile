NAME	=	VirtualTasks

SRC		=	main.cpp \
			Animal.cpp \
			Cat.cpp \
			Dog.cpp \

WRONG_SRC = wrong/WrongMain.cpp \
			wrong/WrongAnimal.cpp \
			wrong/WrongCat.cpp \

CC		=	clang++

FLAGS	=	-Wall -Wextra -Werror

OBJS	=	${SRC:.cpp=.o}

WRONG_OBJS	=	${WRONG_SRC:.cpp=.o}

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

wrong: $(WRONG_OBJS)
		$(CC) $(FLAGS) $(WRONG_OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS) $(WRONG_OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

run: fclean all
	make clean && clear && ./$(NAME)

.PHONY: all clean fclean re