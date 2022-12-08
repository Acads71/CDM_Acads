// ACTIVITY 2 BSIT 1-F
#include <stdio.h>
#define p printf
#define sc scanf

int main2()
{
    char NAME[50];
    int AGE;

    p("------REGISTRATION FORM------");
    p("Enter your NAME:");
    sc("%[^\n]", &NAME);
    p("Enter your AGE");
    sc(" %d", &AGE);
    return 0;
}
