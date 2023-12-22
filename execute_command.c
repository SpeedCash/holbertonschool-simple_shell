#include "main.h"

/**
 * main - fork & wait example
 *
 * Return: Always 0.
 */

int process(void)
{
	pid_t child_pid;
	int status;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	if (child_pid == 0)
	{
		printf("Wait for me\n");
		sleep(3);
	}
	else
	{
		wait(&status);
		printf("Well done, let's go !\n");
	}
	return (0);
}

