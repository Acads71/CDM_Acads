// TUTUNGAN, JAMEEL U. //
// BSIT 1-F //
#include <stdio.h>
#include <stdlib.h>

#define p printf
#define s scanf

int main()
{
    // Celsius as C, Fahrenheit as F //
    float C, F;

    // Temperature in Celsius //
    p("Enter temperature in Celsius: ");
    s("%f", &C);

    // Formula //
    F= (C * 9/5) + 32;

    // Result //
    p("%.1f Celsius = %.1f Fahrenheit", C, F);

    return 0;
}
