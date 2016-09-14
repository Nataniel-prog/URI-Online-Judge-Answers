#include <stdio.h>

int multiplicacao(int n, int x){
    if (n == 1) return x;
    if (n == 0 || x == 0 ) return 0;
    return  n += multiplicacao(n, x - 1);
} 


int main()
{
    int n = 5;
    int x = 2;
    
    printf("%d\n", multiplicacao(n,x));

    return 0;
}