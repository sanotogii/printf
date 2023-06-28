#include "main.h"

/**
 *func_call1 - Entry point
 * @c: arg1
 * @var: arg2
 * @retval: arg3
 * @i: arg4
 * @test_nb: arg5
 * Return: void
 */
void func_call1(char c, unsigned int var, int *retval, int *i, int test_nb)
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
 *func_call2 - Entry point
 * @c: arg1
 * @s: arg2
 * @retval: arg3
 * @i: arg4
 * Return: void
 */
void func_call2(char c, char *s, int *retval, int *i)
{
	char *str = NULL;
	int len = 0;

	if (c == 'r')
	{
		len = print_rev(s, i);
		*retval += len;
	}
	if (c == 'R')
	{
		str = rot13(s);
		*retval += printStr(str, i);
	}
	if (c == 's')
	{
		*retval += printStr(s, i);
	}
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
			if (findchar3(*(format + i + 1)))
				func_call3(format[i + 1], va_arg(ap, int), &rval, &i);
			else if (*(format + i + 1) == 'b')
				to_binary(va_arg(ap, unsigned int), &rval, &i);
			else if (findchar1(*(format + i + 1)))
				func_call1(*(format + i + 1), va_arg(ap, unsigned int), &rval, &i, t_nbr);
			else if (findchar2(*(format + i + 1)))
				func_call2(*(format + i + 1), _strdup(va_arg(ap, char *)), &rval, &i);
			else if (*(format + i + 1) == '%')
				rval += printStr(_strdup("%"), &i);
			else if ((format[i + 1] != '\0' && format[i + 1] != ' ') ||
			 format[i + 2] != '\0')
				rval += write(STDOUT_FILENO, &percent, 1);
			else
				return (-1);
		}
		else
			rval += write(STDOUT_FILENO, format + i, 1);
		i++;
	}
	va_end(ap);
	return (rval);
}
