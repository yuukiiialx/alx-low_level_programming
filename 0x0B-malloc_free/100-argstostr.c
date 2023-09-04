#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			len++;
			total_len++;
		}
		total_len++; /* Account for the newline character */
	}

	str = malloc(sizeof(char) * (total_len + 1));
	if (str == NULL)
		return (NULL);

	j = 0;

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			str[j] = av[i][len];
			j++;
			len++;
		}
		str[j] = '\n';
		j++;
	}

	str[j] = '\0';

	return (str);
}
