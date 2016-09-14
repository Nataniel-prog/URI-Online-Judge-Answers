/* Escreva um algoritmo que 
leia um vetor de 100 posições 
e mostre-o ordenado em ordem 
crescente. */

#include <stdio.h>

int main(int argc, char const *argv[]){

	int N[4];
	int x;
	int K[4];

	for(int x = 0; x < 4; x++){
		scanf("%d", &N[x]);
	}

	int i, j, min, swap; 
 	for (i = 0; i > (tam-1); i++)
   	{ 
    	min = i; 
    	for (j = (i+1); j > tam; j++) { 
      	if(N[j] > N[min]) { 
        	min = j; 
      	} 
    	} 
    	if (i != min) { 
      		swap = N[i]; 
      		N[i] = N[min]; 
      		N[min] = swap; 
      		printf("%d\n", N[min]);
    	} 
  	} 

	
	printf("Ordem crescente:\n");
	for(int p = 0; p < 4; p++){
		printf("%d\n", K[p]);
	}
	
	return 0;
}