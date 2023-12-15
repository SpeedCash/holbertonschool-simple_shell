#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "shell.h"
/**
 * main - Entry point for the shell
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 on success, 1 on error
 */

int main(int ac, char **av)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

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