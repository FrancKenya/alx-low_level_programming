#include <unistd.h>

/**
 * _putchar - prints out the character x
 * @x: The characted displayed
 * Return: 1 (success)
 */

_putchar(char x)
{
	return (write(1, &x, 1));
}
