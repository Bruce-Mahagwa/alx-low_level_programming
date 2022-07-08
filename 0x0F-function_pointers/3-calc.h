#ifndef CALC_H
#define CALC_H
/**
 * struct op - Struct op
 * @s: The operator
 * @get_op_func: The function associated
 *
 * 
 */
typedef struct op
{
    char *s;
    int (*get_op_func(char *s))(int, int)
} op_t;
int op_add(int a, int b);                                                                                                               

int op_sub(int a, int b);                                                                                                               

int op_mul(int a, int b);                                                                                                               

int op_div(int a, int b);                                                                                                               

int op_mod(int a, int b);
#endif
