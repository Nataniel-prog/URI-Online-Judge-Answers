#include <stdio.h>

int soma(int n, int m){
    if (n == 0) return m;
    if (m == 0) return n;
    return  1 + soma(n, m - 1);
} 


int main()
{
    int m = 1;
    int n = 2;
    
    printf("%d\n", soma(n,m));

    return 0;
}