CLAGS = -Wall -Wextra -Werror -I includes/

NAME = ft_display_file

SRC_C = ft_error.c \
	   	main.c\

SRC = $(addprefix srcs/, $(SRC_C))

SRC_O = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC_O)
	gcc $(CFLAGS) $? -o $(NAME)

clean:
	rm -rf $(SRC_O)

fclean: clean
	rm -rf $(NAME)

re: fclean all
