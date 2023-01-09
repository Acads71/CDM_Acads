//ACTIVITY 1 (GRADE COMPUTATION)
//TUTUNGAN, JAMEEL U.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define p printf
#define s scanf

  float quiz, assign, proj, cs, me, grade;
  char name;

int main()
{
    p("Enter your name: ");
     s("%c", &name);
    p("Enter the Grade of Quiz: ");
     s("%f", &quiz);
    p("Enter the Grade of Assignment: ");
     s("%f", &assign);
    p("Enter the Grade of Project: ");
     s("%f", &proj);
    p("Enter the Grade of Class Standing: ");
     s("%f", &cs);
    p("Enter the Grade of Major Exam: ");
     s("%f", &me);

    grade=(cs*.10)+(quiz*.15)+(assign*.15)+(proj*.20)+(me*.40);

    system("cls");

    p("Name: %c", name);
    p("\n");
    p("Your Grade: %.2f", grade);
    p("\n");

    if(grade>=75)
      {
       p("You Passed!\n");\
      }
    else {
       p("You Failed!\n");
      }

return 0;
}
