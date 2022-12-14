#include "main.h"
/**
 * print _islower- check if a char is lowercase
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' &&  <= 'z')
		return (1);
	else
		return (0);
}
