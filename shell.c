#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "shell.h"

/**
 * main - Entry point for simple shell
 * @argc: Argument count
 * @argv: Argument vector
 * @envp: Environment variables
 *
 * Return: Always 0 on success
 */
int main(int argc, char **argv, char **envp)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	int is_interactive = isatty(STDIN_FILENO);

	(void)argc;
	(void)argv;
	(void)envp;

	while (1)
	{
		if (is_interactive)
		{
			printf("$ ");
		}

		read = getline(&line, &len, stdin);
		if (read == -1)
		{
			if (is_interactive)
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

		free(line);
		line = NULL;
		len = 0;
	}

	free(line);
	return (0);
}
