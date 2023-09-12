#include <stdio.h>

/**
*main - function prints text as output
*@_putchar:the output
*Return:return 0
*/
int main(void)
{
	char output[10] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(output[i]);
	}
	putchar(10);
	return (0);
}
