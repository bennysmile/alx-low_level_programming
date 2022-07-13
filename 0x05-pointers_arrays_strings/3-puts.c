#include "main.h"

/**
 * _puts - print out string to the stdout
 * @str: argument to the fuction
 * Description: returns the required results
 * Return: return
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++
	}
	_putchar('\n');
}
