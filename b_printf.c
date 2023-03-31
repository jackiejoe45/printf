#include "main.h"
/**
 * b_printf - prints the binary representation of an unsigned integer
 * @arg: unsigned integer
 * Return: number of characters printed
 */
int b_printf(unsigned int arg)
{
	char binary[64];
	int i, j, count = 0;

	i = 0;
	while (arg > 0)
	{
		binary[i] = arg % 2 + '0';
		arg = arg / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		write(STDOUT_FILENO, &binary[j], sizeof(char));
		count++;
	}
	return (count);
}
