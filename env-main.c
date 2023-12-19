#include <stdio.h>
#include <unistd.h>

/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
    unsigned int i;
    (void)ac;
    (void)av;
	
    for (i = 0; env[i] != NULL; i++)
    {
        printf("%s\n", env[i]);
    }
    return (0);
}
