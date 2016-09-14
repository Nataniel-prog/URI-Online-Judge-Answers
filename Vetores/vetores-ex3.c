/* Escreva um algoritmo que leia dois 
vetores de 10 posições e faça a multiplicação 
dos elementos de mesmo índice, colocando o 
resultado em um terceiro vetor. Mostre o vetor resultante.*/

#include <stdio.h>

int main(){

	int v1[10];
	int v2[10];
	int v3[10];
	int i, j, k;

	printf("Insira os índices de v1:\n");
	for (j = 0; j < 10; j++){
		scanf("%d", &v1[j]);
	}
	printf("Insira os índices de v2:\n");
	for (k = 0; k < 10; k++){
		scanf("%d", &v2[k]);
	}
	for (i = 0; i < 10; i++){
		v3[i]=v1[i]*v2[i];
		printf("v1[%d] * v2[%d] || %d * %d ---> N[%d] = %d\n", i, i, v1[i], v2[i], i, v3[i]);
	}
	return 0;
}