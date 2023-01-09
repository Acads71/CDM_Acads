#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

int main()
{
    int a, b;
  
    p("Value of A: ");
    s("%i", &a);
    p("Value of B: ");
    s("%i", &b);

    p("\n");

    if(a>b){
        p("The Value of A is %i", a);
    }
    if(a<b){
        p("The Value of B is %i", b);
    }
    if(a==b){
        p("The Value of A is %i and it is equal to the Value of B is %i", a,b);
    }

    p("\n");
  
    return 0;
}
