#include <stdio.h>
/**
*main - prints sum of even fibonacci
*suit elements
*fibonacci suit numbers
*Return: return 0
*/
int main(void)
{
unsigned long a = 0, b = 1, c = 0, sum = 0;
while (c <= 4000000)
{
c = a + b;
a = b;
b = c;

if ((a % 2) == 0)
sum += a;

}
printf("%ld\n", sum);
return (0);
}
