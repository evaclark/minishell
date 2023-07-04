NAME = minishell

FLAGS =  -Wall -Wextra -Werror

all:
	gcc $(FLAGS) -o $(NAME) minishell.h main.c

clean:
	rm -rf ./$(NAME)