#include <stdio.h>

int main() 
{

   char nome[]="";
   float salario, vendas, salariofinal; 

   scanf("%s", nome);
   scanf("%f", &salario);
   scanf("%f", &vendas);

   
   salariofinal = salario + (vendas * 0.15f);

   printf("TOTAL = R$ %.2f\n", salariofinal);

   // EU SÓ ERREI PQ ESTAV EM DOLAR, NAO EM REAIS -_-`
   return (0);
}