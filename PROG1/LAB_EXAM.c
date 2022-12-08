#include <stdio.h>
#include <stdlib.h>

int main()
{
   int fir, sec, thr, sum, product;
   float dif;

   printf("Enter Three Numbers : \n");
   scanf("%d %d %d",&fir, &sec, &thr);

   sum = fir + sec + thr;
   dif= (float)(thr + sec)/2;
   product= fir * thr;

   printf("Sum of 1st, 2nd, and 3rd Numbers is : %d", sum);
   printf("The difference of %d and %d is: %.2f", thr, sec, dif);
   printf("Product of 1st and 3rd Number: %d", fir, thr, product);


    return 0;
}
