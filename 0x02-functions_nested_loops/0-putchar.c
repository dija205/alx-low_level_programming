#include "main.h"
/**
*main - function prints text as output
*description: 'prints _putchar to stdout'
*Return: always 0
*/
int main(void)
{
	char output[10] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(output[i]);
	}
	_putchar(10);
	return (0);
}
