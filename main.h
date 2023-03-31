#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int _printf(const char *format, ...);
int process_conversion(const char *format, va_list args);
int c_printf(char arg);
int s_printf(char *arg);
int d_printf(int arg);
int i_printf(int arg);
int pc_printf(void);
int b_printf(unsigned int arg);
int u_printf(unsigned int arg);
int o_printf(unsigned int arg);
int x_printf(unsigned int arg, int uppercase);
int R_printf(char *arg);
int r_printf(char *arg);
int p_printf(void *arg);
int S_printf(char *arg);

#endif /* MAIN_H */
