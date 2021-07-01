
NAME = cast
all: $(NAME)
OBJS		= $(SRCS:.cpp=.o)
$(NAME): main.cpp ex.cpp Casting.cpp Casting.hpp
	clang++ -std=c++98 -Wall -Wextra -Werror *.cpp -o $(NAME)
clean:
fclean: clean
		rm -f $(NAME)
re: fclean all