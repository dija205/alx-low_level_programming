#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point generates a random password
 *
 * Return: the password 
 */
int main(void)
{
char c;
int a;

srand(time(0));
while (a <= 2645)
{
c = rand() % 128;
a += c;
putchar(c);
}
putchar(2772 - a);
return (0);
}
