#include <stdio.h>
#define s scanf

  int st, en;

int main()
{

    printf("\n Enter starting value: ");
    s("%d", & st);
    printf("\n Enter ending value: ");
    s("%d", & en);
    system("cls");
    printf("\n\n Starting value:  %d   Ending Value:  %d \n\n", st, en);
    for (st; st <= en; st++)
    {
        printf(" %d\n", st);
    }

    return 0;
}
