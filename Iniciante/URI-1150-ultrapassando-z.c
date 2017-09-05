#include <stdio.h>

int main(int argc, char const *argv[]){
	
	int X, Z, i;

	scanf("%d", &X);
	scanf("%d", &Z);

	while(Z <= X){
		scanf("%d", &Z);
	}
	int aux = X;
	for(i=1; Z >= aux; i++){
		aux += (X+i);
	}
	printf("%d\n", i);

	return 0;
}
