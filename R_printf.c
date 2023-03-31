#include "main.h"
/**
 * R_printf - prints a string in rot13 encoding
 * @arg: string to encode
 * Return: number of characters printed
 */
int R_printf(char *arg)
{
	int i, j, count = 0;
	char *s = arg;
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (arg == NULL)
		return (-1);
	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			for (j = 0; j < 52; j++)
			{
				if (s[i] == rot13[j])
				{
					count += c_printf(rot13[j]);
					break;
				}
			}
		}
		else
		{
			count += c_printf(s[i]);
		}
	}
	return (count);
}
