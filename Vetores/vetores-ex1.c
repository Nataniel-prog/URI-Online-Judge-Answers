/* Elaborar um algoritmo que lê um conjunto de 30 
valores e os coloca em 2 vetores conforme estes 
valores forem pares ou ímpares. O tamanho do vetor 
é de 5 posições. Se algum vetor estiver cheio, escrevê-lo. 
Terminada a leitura escrever o conteúdo dos dois vetores. 
Cada vetor pode ser preenchido tantas vezes quantas for necessário. */

#include <stdio.h>

int main()
{
	int n[30];
	int p=0, vetor;

	printf("Tamanho do vetor:\n");
	scanf("%d",&vetor);
	printf("Insira %d valores abaixo:\n", vetor);

	while(p<vetor){
		scanf("%d", &n[p]);
		p++;
	}
	
	int x[5];
	int y[5];

	int j;
	int i;
	int k;

	printf("Valor(es) par(es) digitado(s):\n");
	
	for (i = 0; i < sizeof(x)/sizeof(int); i++){		
		if(n[i] % 2 == 0){
			x[i] = n[i];
			printf("%d\n", x[i]);
		}
	}

	printf("Valor(es) ímpar(es) digitado(s):\n");
	
	for (i = 0; i < sizeof(x)/sizeof(int); i++){		
		if(n[i] % 2 != 0){
			y[i] = n[i];
			printf("%d\n", y[i]);
		}
	}

	return 0;
}