#include <stdio.h>

/**
 * main - Affiche les 98 premiers nombres de la suite de Fibonacci
 * Return: Retourne 0
 */
int main(void)
{
int i;
unsigned long a = 0, b = 1, c;
unsigned long ah1, ah2, bh1, bh2;
unsigned long h1, h2;
for (i = 0; i < 92; i++)
{
c = a + b;
printf("%lu, ", c);
a = b;
b = c;
}
ah1 = a / 10000000000;
bh1 = b / 10000000000;
ah2 = a % 10000000000;
bh2 = b % 10000000000;
for (i = 93; i < 99; i++)
{
h1 = ah1 + bh1;
h2 = ah2 + bh2;
if ((ah2 + bh2) > 9999999999)
{
h1 += 1;
h2 %= 10000000000;
}
printf("%lu%lu", h1, h2);
if (i != 98)
printf(", ");
ah1 = bh1;
ah2 = bh2;
bh1 = h1;
bh2 = h2;
}
printf("\n");
return (0);
}
