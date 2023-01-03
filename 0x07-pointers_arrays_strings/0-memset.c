#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer block of memory to fill
 * @b: value to be set
 * @n: number of bytes of the memory area
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
		n++;
	}
	return (s);
}
