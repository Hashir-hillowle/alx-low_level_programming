#include "main.h"


/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 *
 * Return: value of char
 */
char *rot13(char *s)
{
int i;
char *p = s;

char *original = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *code = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (*s != '\0')
{
	i = 0;
	while (i < 53)
	{
		if (*s == original[i])
	{
			*s = code[i];
				break;
	}
		i++;
	}
		s++;
	}
return (p);
}
