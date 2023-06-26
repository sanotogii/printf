#include "main.h"

/**
* printChar - ENTRYPOINT
* @var: constant
* @i: 2 counter
* Return: 0 success or uint
*/

void printChar(char var, int *i)
{

	write(1, &var, 1);
	(*i)++;
}
