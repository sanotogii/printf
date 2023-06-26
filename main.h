#ifndef  __MAIN__H__
#define __MAIN__H__
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _strlen(char *s);
char *_strdup(char *str);
void prinInt(int var, int *retval, int *i);
void printChar(char var, int *i);
int printStr(char *str);
void to_binary(unsigned int var, int *len);
void printUns(unsigned int var, int *retval);
void printOctal(unsigned int var, int *retval);
void printhex(unsigned int var, int *retval);
void printX(unsigned int var, int *retval, int *i);

#endif 
