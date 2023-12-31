#include "main.h"

#define BUFFER_SIZE 1024

ssize_t custom_getline(char **lineptr, size_t *n, FILE *stream)
{
	size_t pos = 0;
	int c;

	if (lineptr == NULL || stream == NULL || n == NULL)
	{
		return (-1);
	}

	if (*lineptr == NULL)
	{
		*lineptr = malloc(BUFFER_SIZE);
		if (*lineptr == NULL)
		{
			return (-1);
		}
		*n = BUFFER_SIZE;
	}

	while ((c = fgetc(stream)) != EOF)
	{
		if (pos >= *n - 1)
		{
			size_t new_size = *n + BUFFER_SIZE;
			char *new_ptr = realloc(*lineptr, new_size);
			if (new_ptr == NULL)
			{
				return (-1);
			}
			*n = new_size;
			*lineptr = new_ptr;
		}

		(*lineptr)[pos++] = (char)c;

		if (c == '\n')
		{
			break;
		}
	}

	(*lineptr)[pos] = '\0';

	if (pos == 0 && c == EOF)
	{
		return (-1);
	}

	return pos;
}

int main(int argc __attribute__((unused)),
char **argv __attribute__((unused)))
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	while (1) {
		printf("$ ");
		read = custom_getline(&line, &len, stdin);

		if (read == -1)
		{
			break;
		}

		if (strcmp(line, "exit\n") == 0)
		{
			break;
		}

		system(line);
	}

	free(line);
	return (0);
}

