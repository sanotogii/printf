#include "main.h"

/**
 *func_call - Entry point
 * @c: arg1
 * @var: arg2
 * @retval: arg3
 * @i: arg4
 * @test_nb: arg5
 * Return: void
 */
void func_call(char c, unsigned int var, int *retval, int *i, int test_nb)
{
	if (c == 'u')
		printUns(var, retval, i, test_nb);
	if (c == 'x')
		printhex(var, retval, i, test_nb);
	if (c == 'X')
		printX(var, retval, i, test_nb);
	if (c == 'o')
		printOctal(var, retval, i, test_nb);
}

/**
 *_printf - Entry point
 *@format: 1 param
 * Return: Always 0
 */

int _printf(const char *format, ...)
{
	int i = 0, rval = 0, t_nbr = 0;
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
				prinInt(va_arg(ap, int), &rval, &i);
			else if (*(format + i + 1) == 'c')
				rval += printChar(va_arg(ap, int), &i);
			else if (*(format + i + 1) == 's')
				rval += printStr(_strdup(va_arg(ap, char *)), &i);
			else if (*(format + i + 1) == 'b')
				to_binary(va_arg(ap, unsigned int), &rval, &i);
			else if (findchar(*(format + i + 1)))
				func_call(*(format + i + 1), va_arg(ap, unsigned int), &rval, &i, t_nbr);
			else if (*(format + i + 1) == '%')
				rval += printStr(_strdup("%"), &i);
			else
				rval += write(STDOUT_FILENO, &percent, 1);
		}
		else
			rval += write(STDOUT_FILENO, format + i, 1);
		i++;
	}
	va_end(ap);
	return (rval);
}
