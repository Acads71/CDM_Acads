#include <stdio.h>

int n, i, j;

int main()
{
    printf("\t\t           FOR LOOP INVERTED TRIANGLE\n\n");;
    printf("\tEnter the Number of Row(s): ");
    scanf("%i", &n);

    printf("\n");

    for(i = n; i >= 0; --i)
    {
        printf("\t\t              ");
        for(j = 1; j <= n - i; ++j)
        {
            printf(" ");
        }
        for(j = 1; j <= i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
}
