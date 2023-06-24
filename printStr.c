#include "main.h"

/**
* printStr - ENTRYPOINT
* @str: constant
* @i: 2 param
* Return: 0 success or uint
*/
int  printStr(char *str, int *i)
{
	int j = 0;

	if (str)
	{
		j += write(1, str, _strlen(str));
		free(str);
	}
	else
		j += write(1, "(null)", _strlen("(null)"));
	(*i)++;
	return (j);
}
