#include <stdio.h>


int main()
{

    int st, en;

    printf("\nEnter starting value: \n");
    scanf("%d", &st);
    printf("\nEnter ending value: \n");
    scanf("%d", &en);

    for (st; en<=st; st--)
    {
        printf("%d\n", st);
    }
    return 0;
}
