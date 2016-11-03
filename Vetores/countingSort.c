#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int A[] = {1,4,1,2,7,5,2};
	int B[10];
	int C[7];
	int i, j;
	int size = 10;

	for (i = 0; i < size; i++){
		B[i]=0;
	}

	for (i = 0; i <= 6; i++){
		for (j = 0; j <= size; j++){
			if (A[i] == j){
				B[j] += 1;
			}
		}
	}

	for(i = 0; i <= size; i++){
		B[i + 1] += B[i];
	}


	for (i = 0; i < 7; i++){
		C[B[A[i]] - 1 ] = A[i];
		B[A[i]]--;
	}

	for (i = 0; i < 7; i++){
		printf("%d ", C[i]);
	}


	return 0;
}