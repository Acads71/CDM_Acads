//Logical Operator
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x = 10;
    int y = 10;
    int a = 20;
    int b = 21;

    if(x==y && a!=b)
    {
        printf("x is less than y AND a is equal to b\n");
    }
    if(x==y || a==b)
    {
        printf("x is less than y OR a is equal to b\n");
    }
    if(!(x==y && a==b))
    {
        printf("NOT OPERATION\n");
    }
    if(!(x==y && a==b))
    {
        p("Make the EXPRESSION become TRUE \n");
    }

    printf("\nCodes after IF!");

    return 0;
