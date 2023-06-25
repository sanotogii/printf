#include "main.h"

/**
* printChar - ENTRYPOINT
* @var: constant
* @i: 2 counter
* Return: 0 success or uint
*/

int  printChar(char var, int *i)
{
	int j = 0;

	j += write(STDOUT_FILENO, &var, 1);
	(*i)++;
	return (j);
}
