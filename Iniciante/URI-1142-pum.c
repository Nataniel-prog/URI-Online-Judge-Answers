#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, x = 0;

	scanf("%d", &N);
	int i=1;
	while(x < N){
		printf("%d %d %d PUM\n", i, i+1, i+2);
		i+=4;
		x++;
	}

	return 0;
}