#include "main.h"

/**
* printChar - ENTRYPOINT
* @var: constant
* @i: 2 param
* Return: 0 success or uint
*/

int  printChar(char var, int *i)
{
	int j = 0, val;

	j += write(1, &var, sizeof(val));
	(*i)++;
	return (j);
}
