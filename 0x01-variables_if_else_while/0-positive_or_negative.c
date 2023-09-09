#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Un programme qui détermine si un nombre est positif, négatif ou nul.
 * 
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
    int a;
    srand(time(0));
    a = rand() - RAND_MAX / 2;

    if (a > 0)
    {
        printf("%d est positif\n", a);
    }
    else if (a == 0)
    {
        printf("%d est nul\n", a);
    }
    else
    {
        printf("%d est négatif\n", a);
    }
    return (0);
}
