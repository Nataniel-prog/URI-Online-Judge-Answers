#include <stdio.h>
#include <stdlib.h>

int main(){

	int num = 1;

	while (num <= 100){

		if (num % 2 == 0){
		printf("%d\n", num);
		}
		
		num++;
	}
}
