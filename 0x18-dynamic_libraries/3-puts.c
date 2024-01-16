#include "main.h"

/**
 *_puts - swaps the value of two integers
 * @str: The pointer value one
 */
void _puts(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		_putchar(s[c]);
		c++;
	}
	_putchar('\n');
}
