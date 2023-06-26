#include "main.h"

/**
 *_printf - Entry point
 *@format: 1 param
 * Return: Always 0
 */

int _printf(const char *format, ...)
{
	int i = 0, retval = 0;
	char percent = '%';
	va_list ap;

	va_start(ap, format);
	if (format == NULL)
		return (-1);
	while (*(format + i) != '\0')
	{
		if (*(format + i) == '%')
		{
			if (*(format + i + 1) == 'd' || *(format + i + 1) == 'i')
				prinInt(va_arg(ap, int), &retval, &i);
			else if (*(format + i + 1) == 'c')
				retval += printChar(va_arg(ap, int), &i);
			else if (*(format + i + 1) == 's')
				retval += printStr(_strdup(va_arg(ap, char *)), &i);
			else if (*(format + i + 1) == 'b')
				to_binary(va_arg(ap, unsigned int), &retval, &i);
			else if (*(format + i + 1) == 'u')
				printUns(va_arg(ap, unsigned int), &retval, &i);
			else if (*(format + i + 1) == 'o')
				printOctal(va_arg(ap, unsigned int), &retval, &i);
			else if (*(format + i + 1) == 'x')
				printhex(va_arg(ap, unsigned int), &retval, &i);
			else if (*(format + i + 1) == 'X')
				printX(va_arg(ap, unsigned int), &retval, &i);
			else if (*(format + i + 1) == '%')
				retval += printStr(_strdup("%"), &i);
			else
				retval += write(STDOUT_FILENO, &percent, 1);
		}
		else
			retval += write(STDOUT_FILENO, format + i, 1);
		i++;
	}
	va_end(ap);
	return (retval);
}
