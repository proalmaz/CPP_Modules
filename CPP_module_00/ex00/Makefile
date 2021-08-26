NAME	= megaphone

SRC		= megaphone.cpp

CC		= clang++

FLAGS	= -Wall -Wextra -Werror

OBJS	= ${SRC:.cpp=.o}

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean	all

.PHONY: all clean fclean re