#ifndef STRING_H
#define STRING_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Demonstrates common uses of string.h functions
 *
 * Return: Always 0 (Success)
 */
int test(void)
{
	char str1[50] = "Hello, ";
	char str2[] = "World!";
	char *str3;
	char *ch;

	/* Concatenation */
	strcat(str1, str2);
	printf("Concatenation: %s\n", str1);

	/* String length */
	printf("Length: %ld\n", strlen(str1));

	/* String copy */
	str3 = (char *)malloc(strlen(str1) + 1);
	if (str3 == NULL)
	{
		perror("Malloc failed");
		return (1);
	}
	strcpy(str3, str1);
	printf("Copy: %s\n", str3);

	/* String comparison */
	if (strcmp(str1, str3) == 0)
		printf("str1 and str3 are equal\n");
	else
		printf("str1 and str3 are not equal\n");

	/* Character search */
	ch = strchr(str1, 'W');
	if (ch != NULL)
		printf("Character 'W' found at position: %ld\n", (ch - str1));
	else
		printf("Character 'W' not found\n");

	/* Free allocated memory */
	free(str3);

	return (0);
}

#endif
