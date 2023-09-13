#include "main.h"
/**
* _abs - prints the absolute value of a number
*@i: input number as integer
*Return: absolute value
*/
int _abs(int i)
{
int i;
if (i > 0)
{
return (i);
}
else if (i < 0)
{
return (i * -1);
}
else
{
return (0);
}
 _putchar('\n');
}
