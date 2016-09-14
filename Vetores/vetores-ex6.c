#include <stdio.h>
int buscalinear(int A[], int n, int chave);

int main(){
    int A[10]={5,6,7,8,90,1,2,3,4};
    int  n = 10;
    int chave = 5;
    
    printf("%d\n",buscalinear(A, n, chave));
    
}


int buscalinear(int A[], int n, int chave){
    
    if(n<0) return -1;
    if(chave == A [n-1]) return(n-1);
    return(buscalinear(A,n-1,chave));
}