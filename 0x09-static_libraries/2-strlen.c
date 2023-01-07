#include "main.h"
/**
 * _strlen - to return the length of string
 * @s: char to check
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
