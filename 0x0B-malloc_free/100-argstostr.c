#include "main.h"
#include <stdlib.h>
/**
 **argstostr -  a function that concatenates all the arguments of your program.
 *@ac : int
 *@av : array
 *Return: array
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	len++;
	str = malloc(len * sizeof(char));

	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (str);
}
