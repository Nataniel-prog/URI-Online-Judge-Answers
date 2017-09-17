#include <stdio.h>

int main(int argc, char const *argv[]){
    int N[10], i = 0;
    scanf("%d", &N[0]);
    printf("N[0] = %d\n", N[0]);
    for(i = 1; i < 10; i++){
        N[i] = N[i -1] * 2;
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
