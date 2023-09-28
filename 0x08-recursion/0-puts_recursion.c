#include "main.h"
/**
 * _puts_recursion - recursive function to print to screen
 *
 * @s: pointer to the string
 *
 * Return: nothing
 */
void _puts_recursion(chars *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}

}
