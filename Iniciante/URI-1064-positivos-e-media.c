#include <stdio.h>

int main() {
    
    int a, b;
    float c, x;

    a = 1;
    b = 0;

    while (a <= 6){
    	scanf("%f", &c);

    	if (c > 0){
    		b++;
    		x+=c;
    	}
    	a++;
   	}


   x = x / b;
    
    printf ("%d valores positivos\n", b);	
    printf("%.1f\n", x);	
    

    return 0;
}
