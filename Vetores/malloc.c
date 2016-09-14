#include <stdio.h>
#include <stdlib.h>

int main(void){

	int *p = (int *) malloc(sizeof(int));

	int x = 1000;
	int y = 90;
                                           
	*p = x;

	printf("%d\n", *p);

	free(p);

	int *m = (int *) malloc(sizeof(int));
	*m = y;

	printf("%d\n", *p);
	printf("%d\n", *m);

	calloc(1, sizeof(int));

	*p = 10;
	*(p+1)=20;

	printf("%d\n", *p);
	printf("%d\n", p[1]);

	return 0;
}