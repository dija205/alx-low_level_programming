#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: string to print
*/

void print_rev(char *s)
{
int len = 0, i = 0;
len = _strlen(s);

for (i = len - 1; i >= 0; i--)
_putchar(s[i]);

_putchar('\n');
}
/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
int count, a;
a = 0;
for (count = 0; s[count] != '\0'; count++)
a++;

return (a);
}
