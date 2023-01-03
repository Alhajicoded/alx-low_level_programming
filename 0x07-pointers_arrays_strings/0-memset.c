#include "main.h"
#include <string.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: memory to be copied
 * @: constant byte
 * @n: number of bytes of the memory area
 * Return: (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
