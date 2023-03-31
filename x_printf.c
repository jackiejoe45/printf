#include "main.h"
/**
 * x_printf - prints an unsigned int in hexadecimal notation
 * @arg: unsigned int to print
 * @uppercase: flag to print uppercase letters
 * Return: number of characters printed
 */
int x_printf(unsigned int arg, int uppercase)
{
	char hex_digits[] = "0123456789abcdef";
	char buffer[100];
	int count = 0, i = 0;

	if (arg == 0)
	{
		count += c_printf('0');
		return (count);
	}

	while (arg > 0)
	{
		buffer[i++] = hex_digits[arg % 16];
		arg /= 16;
	}

	while (--i >= 0)
	{
		if (uppercase)
			count += c_printf(toupper(buffer[i]));
		else
			count += c_printf(buffer[i]);
	}
		return (count);
}
