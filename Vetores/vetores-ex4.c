/* Escreva um algoritmo que leia e mostre 
um vetor de 20 números. A seguir, conte quantos
valores pares existem no vetor. */

#include <stdio.h>

int main(){

	int K[20];
	printf("Insira x valores:\n");
	for (int i = 0; i < 20; i++){
		scanf("%d", &K[i]);
	}
	
	int n=0;
	for (int j = 0; j < 20; j++){
		if(K[j] % 2 == 0){
			n+=1;
		}
	}
	printf("Foram encontrados %d valores par.\n", n);


	return 0;
}