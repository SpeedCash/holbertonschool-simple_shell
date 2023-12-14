#include <stdio.h>
#include <unistd.h>

extern char **environ;

int main(int ac, char **av)
{
	char **env;

	(void)ac;
	(void)av;

	env = environ;
	while (*env != NULL) {
		printf("%s\n", *env);
		env++;
	}

	return (0);
}
