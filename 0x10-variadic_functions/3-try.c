#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: format to use
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	char c;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				c = format[i];
				if (!(c == 'c' || c == 'i'|| c == 'f' || c == 's'))
				{
					printf("%c is not part of the list, ", c);
				}
				i++;
				continue;
		}
		if (:format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
