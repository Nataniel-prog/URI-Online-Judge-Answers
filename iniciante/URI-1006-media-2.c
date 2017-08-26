#include <stdio.h>

int main() 
{

   float A, B, C;
   double MEDIA;

   A = B = C = 10;

   scanf("%f", &A);
   scanf("%f", &B);
   scanf("%f", &C);

   MEDIA = ((2*A) + (3*B) + (5*C)) / 10;

   printf("MEDIA = %.1lf\n", MEDIA);

   return (0);
}