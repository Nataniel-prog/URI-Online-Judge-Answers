#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int N, i;
    float dividendo, quociente;
    scanf("%d", &N);
    for (i = 0; i < N; i++){
        scanf("%f %f", &dividendo, &quociente);
        if(quociente != 0){
            printf("%.1f\n", dividendo/quociente);
        } else {
            printf("divisão impossivel\n");
        }
    }
    return 0;
}
