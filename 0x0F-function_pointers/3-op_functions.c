#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Add two numbers
 * @a: First number
 * @b: Second number
 * Return: Result of addition
 */
int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - Subtract two numbers
 * @a: First number
 * @b: Second number
 * Return: Result of subtraction
 */
int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - Multiply two numbers
 * @a: First number
 * @b: Second number
 * Return: Result of multiplication
 */
int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - Divide two numbers
 * @a: First number
 * @b: Second number
 * Return: Result of division
 */
int op_div(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a / b);
}

/**
 * op_mod - Calculate the modulo of two numbers
 * @a: First number
 * @b: Second number
 * Return: Result of modulo
 */
int op_mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a % b);
}

