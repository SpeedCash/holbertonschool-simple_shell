#include "main.h"

/**
 * main - Main loop, receive input from CLI, parse, and execute it
 * @argv: Array of arguments
 * @argc: Number of arguments passed to the program
 * Return: Always 0 on success
 */
int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
	int status_return = 1, exit_status = 0;
	ssize_t n = 0;
	char **arguments = NULL;
	size_t size = 0;
	char *input_stdin = NULL;

	while (status_return && n != EOF)
	{
		size = 0;
		status_return = isatty(STDIN_FILENO);
		if (status_return)
			write(STDOUT_FILENO, "dav_shell->$ ", 13);

		n = get_input(&input_stdin, &size);
		if (n == -1)
		break;

		if (validate_spaces(input_stdin))
		continue;

		arguments = hsh_tokenizer(input_stdin);
		if (*arguments[0] == '\0')
		continue;

		status_return = hsh_execute_builtins
		(arguments, input_stdin, argv, &exit_status);

		free_resources(arguments, input_stdin);
	}

	return (exit_status);
}
