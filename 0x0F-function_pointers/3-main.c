#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b, result;
    int (*operation)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        return (98);
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);
    operation = get_op_func(argv[2]);

    if (!operation)
        return (99);

    result = operation(a, b);
    printf("%d\n", result);

    return (0);
}

