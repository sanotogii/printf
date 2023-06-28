#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
* print_rev -  Entrypoint
* Description: 'the program's description print_rev
* @s : 1 param
* @i: 2 param
*  Return: Always 0 (Success)
*/

int print_rev(char *s, int *i)
{
	int len;

	len = _strlen(s) - 1;
	while (len >= 0)
	{
		write(STDOUT_FILENO, (s + len), 1);
		len--;
	}
	free(s);
	(*i)++;
	return (_strlen(s) - 1);
}
