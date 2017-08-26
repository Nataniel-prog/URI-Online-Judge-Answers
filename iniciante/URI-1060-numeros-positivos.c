#include <stdio.h>
   int main (){

   int i, p;
   float n;

   p=0;
   
   i = 1;
   while (i <= 6){
   		scanf ("%f", &n);

   		if (n > 0.0)
   			p++;

		i++;
	}

   printf("%d valores positivos\n", p);

}
