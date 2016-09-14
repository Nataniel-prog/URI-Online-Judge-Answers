/* Faça um algoritmo que leia um vetor N[20]. 
A seguir, encontre o menor elemento do vetor N 
e a sua posição dentro do vetor, mostrando: “O 
menor elemento de N é”, M, “e sua posição dentro 
do vetor é:”,P. */

#include <stdio.h>

int main(){

	int N[20];
	int z=0;

	while(z<20){
		scanf("%d", &N[z]);
		z++;
	}	
		
	int M;
	int X = N[1];
	for (int i = 0; i < 20; i++){
		for (int j = 0; j < 20; j++){
			if(N[i]<N[j]){
				M=N[i];
				if(M<X)
				X=M;
			}
		}
		
		
	}
	printf("O menor elemento de N é: %d ", X);
	for (int k = 0; k < 20; k++){
		if(N[k]==X){
			printf("e sua posição dentro do vetor é: %d\n", k);
			break;
		}
	}


	return 0;
}