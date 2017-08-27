#include <stdio.h>

 
 int main(){
   int ano, mes, dia, var;

   scanf("%d", &var);

   ano = var / 365;
   mes = ((var - (ano * 365)) / 30);
   dia = (var - (ano * 365) - (mes * 30));

   printf("%d ano(s)\n", ano);
   printf("%d mes(es)\n", mes);
   printf("%d dia(s)\n", dia);


      return 0;
   }

