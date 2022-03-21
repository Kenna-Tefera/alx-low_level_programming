#include "main.h"

/**
 * print_rev - prints string in reverse
 *
 *@s: holds string
 */
void print_rev(char *s)
{
	int i = string_length(s) - 1;

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

/**
  * string_length - finds the length of a string.
  *
  * @pointer: pointer.
  * Return: length.
  */
int string_length(char *pointer)
{

	for ( int j =0;*(pointer + j) != '\0'; j++)
	{
	}
	return (j);
}
