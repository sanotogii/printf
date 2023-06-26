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
<<<<<<< HEAD

	write(1, &var, 1);
	(*len)++;
=======
	int j = 0;

	j += write(STDOUT_FILENO, &var, 1);
>>>>>>> refs/remotes/origin/master
	(*i)++;
}
