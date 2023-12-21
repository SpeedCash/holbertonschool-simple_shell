#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "shell.h"

int main(int ac, char **av)
{
	char *line = NULL;
	size_t len = 0;
	int read = 0;

	(void)ac;
	(void)av;
	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
			printf("$ ");
		}
		read = getline(&line, &len, stdin);
		if (read == -1)
		{
			if (isatty(STDIN_FILENO))
			{
				printf("\n");
			}
			break;
		}
		line[strcspn(line, "\n")] = 0;
		if (strcmp(line, "exit") == 0)
		{
			break;
		}

		if (strcmp(line, "env") == 0)
		{
			int i = 0;
			char **env = environ;
			for (i = 0; env[i] != NULL; i++)
			{
				printf("%s\n", env[i]);
			}
		}
		
		
		free(line);
		line = NULL;
		len = 0;
	}
	free(line);
	return (0);
}