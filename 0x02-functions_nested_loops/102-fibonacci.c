#include <stdio.h>
/**
*main - prints out first 50
*fibonacci suit numbers
*Return: return 0
*/
int main(void)
{
int d;
unsigned long a = 0, b = 1, c;
for (d = 0; d < 50; d++)
{
c = a + b;
printf("%lu", c);
a = b;
b = c;

if (d == 49)
printf("\n");
else
printf(", ");
