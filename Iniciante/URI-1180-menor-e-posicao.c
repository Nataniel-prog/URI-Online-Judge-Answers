#include <stdio.h>

int main(int argc, char const *argv[]){
    int N;
    scanf("%d", &N);

    int X[N], i=0;
    while(i < N){
        scanf("%d", &X[i]);
        i++;
    }
    int aux, posicao;
    aux = X[0];
    for (i = 0; i < N; i++){
        if(X[i] < aux){
            aux = X[i];
            posicao = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", aux, posicao);
    return 0;
}
