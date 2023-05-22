NAME = megaphone

SRC = ${shell echo *.cpp}

OBJ = $(patsubst %.cpp, %.o, $(SRC))

CC = c++ 

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

all: $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re