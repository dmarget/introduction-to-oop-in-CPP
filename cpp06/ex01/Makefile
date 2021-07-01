NAME = cast
all: $(NAME)
$(NAME): main.cpp
	clang++ -std=c++98 -Wall -Wextra -Werror *.cpp -o $(NAME)
clean:
fclean: clean
		rm -f $(NAME)
re: fclean all