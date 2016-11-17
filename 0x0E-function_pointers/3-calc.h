#ifndef CALC_H
#define CALC_H

typedef struct ops
{
	int add;
	int sub;
	int mul;
	int div;
	int mod;
} opt_t;
int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif
