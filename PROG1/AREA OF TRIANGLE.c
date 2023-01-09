#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define p printf
#define sc scanf

    float b, h, area;

int main()
{
    p("\" Area of Triangle\" \n\n");

    // For Base
    p("Base = ");
    sc("%f", &b);

    //For Height
    p("Height = ");
    sc("%f", &h);

    system("cls");

    area = (b*h)/2;
 // Answer
    p("Total Area = %.2f", area);

    return 0;
}
