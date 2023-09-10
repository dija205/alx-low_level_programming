#include <stdio.h>
11;rgb:0000/0000/0000/**
 * main - a program that prints all possible different combinations of two digits
 * return :0
 **/
int main(void){
int i,j;
for (i = 0; i < 10; i++) {
 for (j = i + 1; j < 10; j++) {
  printf("%d%d ", i, j);
  if (i != 8 || j != 9) {
    printf(", ");
           }
        }
  }
printf("\n");
return (0);
}
