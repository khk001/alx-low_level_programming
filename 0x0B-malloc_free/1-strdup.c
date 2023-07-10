#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that duplicate to new memory space location
 * @str: parameter
 * Return: dup
 */
char *_strdup(char *str)
{
	char *dup;
	int i;
	int j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	dup = malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
		return (NULL);

	for (j = 0; str[j]; r++)
		dup[j] = str[j];

	return (dup);
}
