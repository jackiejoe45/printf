#include "main.h"
/**
 * p_printf - prints a void pointer in hexadecimal notation
 * @arg: pointer to print
 * Return: number of characters printed
 */
int p_printf(void *arg)
{
	unsigned long int p = (unsigned long int) arg;
	int count = 0;

	count += c_printf('0');
	count += c_printf('x');
	count += x_printf(p, 0);

return (count);
}
