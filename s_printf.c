#include "main.h"
/**
  * s_printf - prints a string
  * @arg: string to print
  * Return: integer
  */
int s_printf(char *arg)
{
	char *s;
	int len, count = 0;

	s = arg;
	len = strlen(s);
	count += len;
	write(STDOUT_FILENO, s, len);
	return (count);
}
