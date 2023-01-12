#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

    int num;
	char dw;

int main()
{
    do {
    p("Enter Number : ");
    s("%i", &num);

    p("\n");

    if(num >= 0){
        p("POSITIVE NUMBER!!!");
    }
    else{
        p("NEGATIVE NUMBER!!!");
    }
	
	p("\n\n Press Y to try again!: [Y/N]");
	s("%s", &dw);
	} while(dw=='y'||dw=='Y');


    return 0;
}