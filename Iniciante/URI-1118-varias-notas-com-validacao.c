#include <stdio.h>

int main(int argc, char const *argv[]){
    float nota_atual, media, notas[2];
    int i = 0, j;
    while(scanf("%f", &nota_atual)){
        if(nota_atual >= 0 && nota_atual <= 10){
            notas[i] = nota_atual;
            i += 1;
            if(i == 2){
                media = (notas[0] + notas[1]) / 2;
                printf("media = %.2f\n", media);
                i = 0;
                do{
                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d", &j);
                    if(j == 2)
                        return 0;
                }while(j != 1);
                j = 0;
            }
            continue;
        } else {
            printf("nota invalida\n");
        }
    }
}