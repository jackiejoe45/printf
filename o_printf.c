#include "main.h"
/**
 * o_printf - prints an unsigned int in octal notation
 * @arg: unsigned int to print
 * Return: number of characters printed
 */
int o_printf(unsigned int arg)
{
	unsigned int num = arg;
	int count = 0;
	char c;

	if (num / 8)
		count += o_printf(num / 8);
	c = num % 8 + '0';
	count += write(STDOUT_FILENO, &c, sizeof(char));
	return (count);
}
