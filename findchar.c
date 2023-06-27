#include "main.h"

/**
* findchar1 - ENTRYPOINT
* @c: constant
* Return: 0 success or uint
*/

int findchar1(char c)
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

/**
* findchar2 - ENTRYPOINT
* @c: constant
* Return: 0 success or uint
*/

int findchar2(char c)
{
	int i, find = 0, lenght = 0;
	char *s = "SrR";

	lenght = _strlen(s);
	for (i = 0; i < lenght; i++)
		if (*(s + i) == c)
		{
			find = 1;
			break;
		}
	return (find);
}
