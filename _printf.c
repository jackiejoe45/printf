#include "main.h"
/**
 * _printf - produces format according to a format
 * @format: input provided
 * Return: Always 0(Success)
 */
int _printf(const char *format, ...)
{
	int count  = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			count += write(STDOUT_FILENO, format, 1);
		}
		else
		{
			format++;
			if (*format == '\0')
				return (-1);
			count += process_conversion(format, args);
		}
		format++;
	}
	va_end(args);
	return (count);
}

/**
 * process_conversion - selects the appropriate function
 * @format: format specifier
 * @args: argument list
 * Return: Count of printed output
 */
int process_conversion(const char *format, va_list args)
{
	switch (*format)
	{
		case 'c':
			return (c_printf((char) va_arg(args, int)));
		case 's':
			return (s_printf(va_arg(args, char *)));
		case 'd':
		case 'i':
			return (d_printf(va_arg(args, int)));
		case 'b':
			return (b_printf(va_arg(args, unsigned int)));
		case 'u':
			return (u_printf(va_arg(args, unsigned int)));
		case 'o':
			return (o_printf(va_arg(args, unsigned int)));
		case 'x':
			return (x_printf(va_arg(args, unsigned int), 0));
		case 'X':
			return (x_printf(va_arg(args, unsigned int), 1));
		case 'R':
			return (R_printf(va_arg(args, char *)));
		case 'r':
			return (r_printf(va_arg(args, char *)));
		case 'p':
			return (p_printf(va_arg(args, void *)));
		case 'S':
			return (S_printf(va_arg(args, char *)));
		case '%':
			return (pc_printf());
		default:
			return (-1);
	}
}
