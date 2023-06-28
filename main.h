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
void printUns(unsigned int var, int *retval, int *i, int test_nb);
void printOctal(unsigned int var, int *retval, int *i, int test_nb);
void printhex(unsigned int var, int *retval, int *i, int test_nb);
void printX(unsigned int var, int *retval, int *i, int test_nb);
void to_binary(unsigned int var, int *len, int *i);
void func_call1(char c, unsigned int var, int *retval, int *i, int test_nb);
void func_call2(char c, char *s, int *retval, int *i);
int print_rev(char *s, int *i);
int findchar1(char c);
int findchar2(char c);
char *rot13(char *s);
int printascii(char var, int *i);
void func_call3(char c, int var, int *retval, int *i);
int findchar3(char c);
#endif
