#include <stdio.h>
#include "main.h"
/**
*swap_int - swap two integers a and b
*@a: first integer
*@b: second integer
*Return: nothing to return 
*/

void swap_int(int *a, int *b)
{
int help = *a;
*a = *b;
*b = help;
}
