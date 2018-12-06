#ifndef PARSER_MODULE_H_
#define PARSER_MODULE_H_

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "lcd_driver.h"

void append(char* s, char c);
int strToInt(char a[]);
void parser(char c[]);
void reverse(char s[]);
char* itoa(int num, char* str, int base);

#endif /* PARSER_MODULE_H_ */
