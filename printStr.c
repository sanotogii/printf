#include "main.h"

/**
* printStr - ENTRYPOINT
* @str: constant
* @i: counter
* Return: 0 success or uint
*/
int  printStr(char *str, int *i)
{
	int j = 0;

	if (str)
	{
		j += write(STDOUT_FILENO, str, _strlen(str));
		free(str);
	}
	else
		j += write(STDOUT_FILENO, "(null)", _strlen("(null)"));
	(*i)++;
	return (j);
}
