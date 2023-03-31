#include "main.h"
/**
  * pc_printf - prints a percentage;
  * Return: integer
  */
int pc_printf(void)
{
	int count = 0;

	write(STDOUT_FILENO, "%", sizeof(char));
	count++;
	return (count);
}
