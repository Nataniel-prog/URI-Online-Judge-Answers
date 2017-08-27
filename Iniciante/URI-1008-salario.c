#include <stdio.h>

int main() 
{

   int NUMBER, HOURS;
   float VALUEHOUR, SALARY;
   
   scanf("%d", &NUMBER);
   scanf("%d", &HOURS);
   scanf("%f", &VALUEHOUR);

   printf("NUMBER = %d\n", NUMBER);

   SALARY = VALUEHOUR * HOURS;

   printf("SALARY = U$ %.2f\n", SALARY);


   return (0);
}