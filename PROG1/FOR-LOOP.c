#include <stdio.h>

int main() {

   int rows, i, j;

   printf("Enter the number of rows: ");
   scanf("%d", &rows);


   for (i = i; i <= rows; i++)
   {
       for (j = i; j<= rows - i; j++)
       {
           printf(" ");
       }

       for (j = i; j <= i; j++)
       {
           printf("* ");
       }

       printf("\n");
   }

   return 0;
}
