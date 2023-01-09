#include <stdio.h>
#include <stdlib.h>

#define p printf
#define sc scanf


int main()
{
    float num1, num2, num3;
    float sum, dif, prod;
    float quo, rs;

    p("Number [1] : ");
    sc("%f", &n1);
    p("Number [2] : ");
    sc("%f", &n2);
    p("Number [3] : ");
    sc("%f", &n3);

   //formulas
    sum = n1+n2+n3;
    dif = n3-n2;
    prod = n1*n3;
    quo = n1/n2;
    rs = pow(n3,n2);
    system("cls");

    p("Sum        = %.2f \n", sum);
    p("Difference = %.2f \n", dif);
    p("Product    = %.2f \n", prod);
    p("Quotient   = %.2f \n", quo);
    p("Raise      = %.2f \n", rs);

    return 0;
}
