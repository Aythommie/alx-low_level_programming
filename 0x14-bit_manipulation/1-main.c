#include <main.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print _binary(0);
    printf("\n");
    print _binary(1);
    printf("\n");
    print _binary(98);
    printf("\n");
    print _binary(1024);
    printf("\n");
    print _binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
