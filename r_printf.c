#include "main.h"
/**
 * r_printf - prints a string in reverse order
 * @arg: string to reverse
 * Return: number of characters printed
 */
int r_printf(char *arg)
{
	char *str = arg;
	int len = 0, count = 0;

	while (*str)
	{
		len++;
		str++;
	}
	str--;
	while (len > 0)
	{
		count += write(STDOUT_FILENO, str, sizeof(char)) && 1;
		str--;
		len--;
	}
	return (count);
}
