//Include Section
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Define Section
#define p printf
#define s scanf

  float qz, asg, proj, cs, me, grade;

int main()
{
// Input Section
    p("Quiz: ");
    	s("%f", &qz);
    p("Assignment: ");
    	s("%f", &asg);
    p("Project: ");
    	s("%f", &proj);
    p("Class Standing: ");
    	s("%f", &cs);
    p("Major Exam: ");
    	s("%f", &me);

    grade = (cs*.10) + (qz*.15) + (asg*.15) + (proj*.20) + (me*.40); // Formula

    system("cls"); 
  
    p("Grade: %.2f", grade);

return 0;
}
