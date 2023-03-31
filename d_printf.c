#include "main.h"
/**
  * d_printf - prints a signed decimal
  * @arg: decimal to print
  * Return: integer
  */
int d_printf(int arg)
{
	int len, num, count = 0;
	char buf[32];

	num = arg;

	len = snprintf(buf, sizeof(buf), "%d", num);
	count += len;
	write(STDOUT_FILENO, buf, len);
	return (count);
}
