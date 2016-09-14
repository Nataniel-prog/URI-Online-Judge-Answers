#include <stdio.h>

void selection(int vetor[], int tam){
	int i, j, menor, swap;

	for (i = 0; i < tam; i++){
		menor = vetor [i];
		for (j = 0; j <= tam; j++){
			if(vetor[j]<menor){
				swap = menor;
				menor = vetor[j];
				vetor[j]=swap;
			}
		vetor[i]=menor;
		}
	}

}
int main(){
	
	int vetor[]={20,12,7,22,5};
	int tam = 5;

	selection(vetor, tam);

	for (int i = tam - 1 ; i >= 0; i--){
		printf("%d\n", vetor[i]);
	}
	


	return 0;
}
