#include <stdio.h>

int main() 
{
   float c1, n1, v1;
   float c2, n2, v2; 

   scanf("%f %f %f", &c1, &n1, &v1);
   scanf("%f %f %f", &c2, &n2, &v2);

   printf("VALOR A PAGAR: R$ %.2f\n", (n1*v1) + (n2*v2));

   return (0);
}