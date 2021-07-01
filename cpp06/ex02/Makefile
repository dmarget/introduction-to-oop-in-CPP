NAME = ex02
all: $(NAME)
OBJS		= $(SRCS:.cpp=.o)
$(NAME): main.cpp B.cpp B.hpp Base.cpp Base.hpp A.cpp A.hpp C.cpp C.hpp
	clang++ -std=c++98 -Wall -Wextra -Werror *.cpp -o $(NAME)
clean:
fclean: clean
		rm -f $(NAME)
re: fclean all