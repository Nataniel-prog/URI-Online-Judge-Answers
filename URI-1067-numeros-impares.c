#include <stdio.h>

    int main() {
    
	 int x, i;


	 i = 0;

	 scanf("%d", &x);

	 while (i <= x){

	 	if(i % 2 != 0)
	 		printf("%d\n", i);

		i++;
	 }

 	return 0;
}

