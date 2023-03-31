#include "main.h"
/**
  * c_printf - prints a character
  * @arg: character to print
  * Return: integer
  */
int c_printf(char arg)
{
	char c;
	int  count = 0;

	c = arg;
	count++;
	write(STDOUT_FILENO, &c, sizeof(char));
	return (count);
}
