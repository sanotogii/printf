#include "main.h"

/**
* printChar - ENTRYPOINT
* @var: constant
* @len: argv 2
* @i: 2 counter
* Return: 0 success or uint
*/

void printChar(char var, int *len, int *i)
{

	write(1, &var, 1);
	(*len)++;
	(*i)++;
}
