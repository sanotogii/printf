#include "main.h"

/**
* prinInt - ENTRYPOINT
* @var: constant
* @len: second param
* @i: third param
* Return: 0 success or uint
*/
void  prinInt(int var, int *len, int *i)
{
	char ch;

	if (var < 0)
	{
		(*len)++;
		write(STDOUT_FILENO, "-", 1);
		if (var == -2147483648)
		{
			var = -147483648;
			(*len)++;
			write(STDOUT_FILENO, "2", 1);
		}
		var = -var;
	}
	if (var / 10)
		prinInt(var / 10, len, i);
	if (var / 10 == 0)
		(*i)++;
	ch = var % 10 + '0';
	write(STDOUT_FILENO, &ch, 1);
	(*len)++;
}
