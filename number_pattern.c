#include <stdio.h>
int main() {
   int rows, i, j, number = 1;
   for (i = 1; i <= 4; i++)
    {
      for (j = 1; j <= i; ++j)
      {
         printf("%d ", number);
         number++;
      }
      printf("\n");
   }
   return 0;
}
