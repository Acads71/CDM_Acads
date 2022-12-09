#include <stdio.h>
#include <stdlib.h>

int main(){

	float C, F;

printf("<---- C-F Converter ---->\n");
printf("\n");
printf("Celsius: ");
scanf("%f", &C);

//Formula
F=(C*9/5)+32;

system("cls");

printf("<-----Results----->\n");
printf("\n");
printf("%.2f Celsius to %.2f Fahrenheit", C, F);
printf("\n");

return 0;
}
