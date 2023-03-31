#include "main.h"
/**
 * u_printf - prints an unsigned int in decimal notation
 * @arg: unsigned int to print
 * Return: number of characters printed
 */
int u_printf(unsigned int arg)
{
	unsigned int num = arg;
	int count = 0;
	char c;

	if (num / 10)
		count += u_printf(num / 10);
	c = num % 10 + '0';
	count += write(STDOUT_FILENO, &c, sizeof(char));
	return (count);
}
