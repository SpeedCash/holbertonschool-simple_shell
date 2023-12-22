#include "main.h"

/**
 * custum - Fonction qui imprime l'environnement du système
 * @ac: Nombre d'arguments de la ligne de commande
 * @av: Tableau des arguments de la ligne de commande
 * @env: Tableau des variables d'environnement
 *
 * Return: Toujours 0.
 */

int custum(int ac, char **av, char **env)
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
