#include <stdio.h>
int main()
{
    int idade,aux=0;
    double media, i=0;
    while(1)
    {
        scanf("%d", &idade);
        if(idade<0)
            break;
        else
        {
            aux+=idade;
            i++;
        }
    }
    media=aux/i;
    printf("%.2lf\n",media);
    return 0;
}

/* Não sei pq essa merda acima é aceita, pq ta dando looping infinito. 
#include <stdio.h>

int main(int argc, char const *argv[]){
    float media, valor;
    int i=0;
    while(scanf("%f", &valor)){
        if(valor < 0){
            printf("%.2f\n", media/i);
            return 0;
        }
        media += valor;
        i++;
    }
}

*/
