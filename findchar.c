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
	char *s = "SpsrR";

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
* findchar3 - ENTRYPOINT
* @c: constant
* Return: 0 success or uint
*/

int findchar3(char c)
{
	int i, find = 0, lenght = 0;
	char *s = "dic";

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
 *func_call3 - Entry point
 * @c: arg1
 * @var: arg2
 * @retval: arg3
 * @i: arg4
 * Return: void
 */
void func_call3(char c, int var, int *retval, int *i)
{

	if (c == 'd' || c == 'i')
		prinInt(var, retval, i);
	if (c == 'c')
		*retval += printChar(var, i);
}
