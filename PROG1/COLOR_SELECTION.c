#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

   char color;

int main() {

    p("First letter of a color: ");
    s("%c", color);

    if(color=='R'||color=='r') {
        p("It's color Red!");
    }
    else if(color=='O'||color=='o') {
        p("It's color Orange!");
    }
    else if(color=='Y'||color=='y') {
        p("It's color Yellow!");
    }
    else if(color=='G'||color=='g') {
        p("It's color Green!");
    }
    else if(color=='B'||color=='b') {
        p("It's color Blue!");
    }
    else if(color=='I'||color=='i') {
        p("It's color Indigo!");
    }
    else if(color=='V'||color=='v') {
        p("It's color Violet!");
    }
    else {
        p("Unknow Color!");
    }

    return 0;
}
