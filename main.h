#ifndef __MAIN__H__
#define __MAIN__H__
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _strlen(char *s);
char *_strdup(char *str);
void prinInt(int var, int *retval, int *i);
int printChar(char var, int *i);
int printStr(char *str, int *i);
void to_binary(unsigned int var, int *len, int *i);
#endif
