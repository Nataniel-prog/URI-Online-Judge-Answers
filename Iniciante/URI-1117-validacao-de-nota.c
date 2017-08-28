#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    float nota_atual, media, notas[2];
    int i = 0;
    while(scanf("%f", &nota_atual)){
        if(nota_atual >= 0 && nota_atual <= 10){
            notas[i] = nota_atual;
            i += 1;
            if(i == 2){
                media = (notas[0] + notas[1]) / 2;
                printf("media = %.2f\n", media);
                return 0;
            }
            continue;
        } else {
            printf("nota invalida\n");
        }
    }
}
