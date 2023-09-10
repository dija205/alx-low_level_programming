#include <stdio.h>
/**
 * main - a program that prints all possible different combinations of two digits
 * return :0
 **/
int main() {
  int i,j;
    for (i = 0; i < 10; i++) {
      for (j = i + 1; j < 10; j++) {
            printf("%d%d, ", i, j);
        }
    }

    printf("\n");
    return 0;
}
