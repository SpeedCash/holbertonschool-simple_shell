#include "main.h"

int get_env(void)
{
	char **env = *environ;

	while (*env != NULL)
	{
		printf("%s\n", *env);
		env++;
	}

	return (0);
}
