#include "main.h"
/**
*times_table - prints the 9 times table
*
*Return: returns nothing
*/
void times_table(void)
{
int d, m, r;
for (d = 0; d <= 9; d++)
{
_putchar('0');

for (m = 1; m <= 9; m++)
{
_putchar(',');
_putchar(' ');
r = d * m;
if (r <= 9)
_putchar(' ');
else
_putchar((r / 10) + '0');

_putchar((r % 10) + '0');
}
_putchar('\n');
}
}

}
