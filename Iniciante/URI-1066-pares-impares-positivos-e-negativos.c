#include <stdio.h>

int main() {
    
 	int i, a, b, c, d;
 	int n;

 	i = 1;
 	b = 0;
 	a = 0;
 	c = 0;
 	d = 0;

 	while (i <= 5){
 		scanf("%d", &n);

 		if (n % 2 == 0){
 			a++;
 		}

 		if (n % 2 != 0){
 			b++;
 		}

 		if (n > 0){
 			c++;
 		}

 		if (n < 0){
 			d++;
 		}

 		i++;	
 	}

 	printf("%d valor(es) par(es)\n", a);
 	printf("%d valor(es) impar(es)\n", b);
 	printf("%d valor(es) positivo(s)\n", c);
 	printf("%d valor(es) negativo(s)\n", d);

 	return 0;
}
