NAME = minishell

FLAGS =  -Wall -Wextra -Werror

all:
	gcc $(FLAGS) -o $(NAME) main.c

clean:
	rm -rf ./$(NAME)