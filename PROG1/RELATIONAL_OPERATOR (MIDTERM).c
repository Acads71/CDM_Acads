//Relational Operator
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x = 15;
    int y = 10;

    if(x==y)
    {
        printf("Both variables are equal\n");
    }

    if(x>y)
    {
        printf("x is greater than y\n");
    }

    if(x<y)
    {
        printf("x is less than y\n");
    }

    if(x!=y)
    {
        printf("x is not equal to y\n");
    }

    if(x<=y)
    {
        printf("x is lesser or equal to y\n");
    }

    if(x>=y)
    {
        printf("x is greater or equal to y\n");
    }

    printf("Codes after IF!");

    return 0;
}
