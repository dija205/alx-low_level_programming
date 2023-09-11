#include <stdio.h>
/**                                                             
 * main - entry point   
 *                                            
 * Return : Always 0 (success)
 *                            
 */
int main(void)
{
int i, j;
int k;
for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
for (k = j + 1; k < 10 ; k++)
{
printf("%d%d%d", i, j, k);
if (i != 7 || j != 8 || k != 9)
{
printf(", ");
}
}
}
}
printf("\n");
return (0);
}
