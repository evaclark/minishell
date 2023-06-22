#include "headers/minishell.h"

int main()
{
	int	i;

	i = 1;
	while(i)
	{
		printf("> ");

		char	*line = readline();
		
		free (line);
		i = 0;
	}

	return 0;
}