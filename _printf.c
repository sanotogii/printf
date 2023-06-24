#include "main.h"


/**
 *_printf - Entry point
 *@format: 1 param
 * Return: Always 0
 */

int _printf(const char *format, ...)
{
	int i = 0, retval = 0;
	va_list ap;

	va_start(ap, format);
	while (*(format + i) != '\0')
	{
		if (*(format + i) == '%')
		{
			if (*(format + i + 1) == 'd' || *(format + i + 1) == 'i')
				prinInt(va_arg(ap, int), &retval, &i);
			if (*(format + i + 1) == 'c')
				retval += printChar(va_arg(ap, int), &i);
			if (*(format + i + 1) == 's')
				retval += printStr(_strdup(va_arg(ap, char *)), &i);
			if (*(format + i + 1) == '%')
				retval += write(1, "%", 1);
		}
		else
			retval += write(1, format + i, 1);
		i++;
	}
	va_end(ap);
	return (retval);
}
