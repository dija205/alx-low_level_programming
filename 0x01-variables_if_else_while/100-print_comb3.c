#include <stdio.h>
/**
 * main - entry point prints all possible different combinations of two digits
 *
 * Return : Always 0 (success)
 **/

int main(void)
{/* Votre code ici*/
int i, j;
for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
printf("%d%d", i, j);
if (i != 8 || j != 9)
{
printf(", ");
}
}
}
printf("\n");
return (0);
}
