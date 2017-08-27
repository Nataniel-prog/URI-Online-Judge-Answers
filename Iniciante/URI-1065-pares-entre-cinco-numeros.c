#include <stdio.h>

int main() {
    
 	int a, b;
 	int c;

 	a = 1;
 	b = 0;

 	while (a <= 5){
 		scanf("%d", &c);

 		if (c % 2 == 0){
 			b++;
 		}

 		a++;	
 	}
 	printf("%d valores pares\n", b);

    return 0;
}
