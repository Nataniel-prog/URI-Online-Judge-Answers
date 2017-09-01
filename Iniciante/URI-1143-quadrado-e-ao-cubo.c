#include <stdio.h>

int main() {
    int i, qtd;
	scanf("%d", &qtd);
	
	for(i=1; i<=qtd; i++){
	    printf("%d %d %d\n", i, i*i, i*i*i);
	}
	return 0;
}
