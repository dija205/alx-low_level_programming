#include <stdio.h>

/**
 * main - a simple program to write a line of text, this time without the
 * commands from previous examples
 *
 * Return: 1 when finished
 */
int main(void)
{
	char a[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(a, sizeof(char), sizeof(a) - 1, stderr);
	return (1);
}
