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

/**
* printstrX - ENTRYPOINT
* @str: constant
* @retval: return value
* @i: counter
* Return: 0 success or uint
*/

int  printstrX(char *str, int *retval, int *i)
{
	int k = 0;

	if (str)
	{
		while (str[k] != '\0')
		{
			if (str[k] < 32 || str[k] >= 127)
			{
				*retval += write(1, "\\", 1);
				*retval += write(1, "x", 1);
				if (str[k] <= 10)
					*retval += write(1, "0", 1);
				(*i)--;
				printX(str[k], retval, i, 0);
			}
			else
				*retval += write(1, str + k, 1);
			k++;
		}
		free(str);
	}
	else
		*retval += write(STDOUT_FILENO, "(null)", _strlen("(null)"));
	(*i)++;
	return (*retval);
}
