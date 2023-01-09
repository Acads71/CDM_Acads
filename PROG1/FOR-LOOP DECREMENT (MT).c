#include <stdio.h>
#define s scanf


int main()
{

    int st, en;

    printf("\n Enter initial value: ");
    s("%d", & st);
    printf("\n Enter ending value: ");
    s("%d", & en);
    system("cls");
    printf("\n\n Starting value:  %d   Ending Value:  %d \n\n", st, en);
    for (st; en <= st; st--)
    {
        printf(" %d\n", st);
    }
    return 0;
}
