#include <stdio.h>

int main(int argc, char const *argv[]){
    float A[100];
    int i = 0;

    for(i=0; i < sizeof(A)/4; i++){
        scanf("%f", &A[i]);

        if(A[i] <= 10){
            printf("A[%d] = %.1f\n", i, A[i]);
        }

    }

    return 0;
}
