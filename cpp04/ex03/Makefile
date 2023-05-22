NAME = amateria

SRC = ${shell echo src/*.cpp}

OBJ = $(patsubst %.cpp, %.o, $(SRC))

HEADER = ${shell echo inc/*.hpp}

CC =  c++

FLAGS = -Werror -Wextra -Wall -std=c++98 -pedantic

all: $(NAME)
	mkdir obj && mv *.o obj/

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ)  -o $(NAME)

clean:
	cd obj/ && rm -f $(OBJ) && cd .. && rmdir obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re