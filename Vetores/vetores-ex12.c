#include <stdio.h>

void insertion(int vetor[], int tam){
	int i, j, swap;

	for (i = 1; i < tam; i++){
		
		j = i;

		while ((j!=0) && (vetor[j]>vetor[j-1])){		
			swap = vetor[j];
			vetor[j]=vetor[j-1];
			vetor[j-1]=swap;

			j--;
		}
	}
}
int main(){

	int vetor[]={6,5,3,1,8,7,2,4};
	int tam = 8;

	insertion(vetor,tam);

	for (int k = tam - 1; k >= 0; k--){
		printf("%d\n", vetor[k]);
	}
		

	return 0;
}