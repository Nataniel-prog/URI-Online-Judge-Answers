#include <stdio.h>

void burbble(int vetor[],int tam){
    int i, j, swap;
    for(i=tam-1;i>0;i--){
        for(j=0;j<i;j++){
            if(vetor[j]>vetor[j+1]){
                swap = vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=swap;
            }
        }
    }
}
int main(){

    int vetor[]={3,1,5,6,2,4,7,8};
    int tam = 8;

    burbble(vetor,tam);

    for (int i = 0; i < tam; i++){
        printf("%d\n", vetor[i]);
    }
        

    return 0;
}


/* for(j=tam-1;j<=(tam+1);j++){
        for(i=0;i<tam-(i+1);i++){
            if(vetor[i]>vetor[i+1]){
                swap = vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=swap;
            }
        }
    }*/