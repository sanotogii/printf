#include "main.h"

/**
* findchar - ENTRYPOINT
* @c: constant
* Return: 0 success or uint
*/

int findchar(char c)
{
	int i, find = 0, lenght = 0;
	char *s = "ouxX";

	lenght = _strlen(s);
	for (i = 0; i < lenght; i++)
		if (*(s + i) == c)
		{
			find = 1;
			break;
		}
	return (find);
}
