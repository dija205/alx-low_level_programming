#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - a program determines if a number is positive, negative or zero.
 *
 *Return : Always 0 (Success)
 */
int main(void)
{
  int a;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if (n>0)
    {
      printf("%d is positive\n",a);
    }
  else if (n == 0)
    {
      printf("%d is zero\n",a);
    }
  else
    {
      printf("%d is negative\n",a);
    }
  return (0);
}
