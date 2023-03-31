#include "main.h"
/**
  * i_printf - prints an unsigned decimal
  * @arg: decimal to print
  * Return: integer
  */
int i_printf(int arg)
{
	int num, len, count = 0;
	char buf[32];

	num = arg;

	len = snprintf(buf, sizeof(buf), "%d", num);
	count += len;
	write(STDOUT_FILENO, buf, len);
	return (count);
}
