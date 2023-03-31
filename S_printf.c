#include "main.h"
/**
 * S_printf - converts non-printable characters to hex notation and prints
 * @arg: string to print
 * Return: number of characters printed
 */
int S_printf(char *arg)
{
	int count = 0;

	while (*arg)
	{
		if (*arg < 32 || *arg >= 127)
		{
			count += c_printf('\\');
			count += c_printf('x');
			count += x_printf((unsigned char) *arg, 1);
		}
		else
		{
			count += c_printf(*arg);
		}
		arg++;
	}
	return (count);
}
