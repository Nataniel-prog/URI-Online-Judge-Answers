#include <stdio.h>

int main(int argc, char const *argv[]){
    int X[10], i = 0;

    for(i = 0; i < sizeof(X) / 4; i++){
        scanf("%d", &X[i]);
        if(X[i] <= 0){
            X[i] = 1;
        }
        printf("X[%d] = %d\n", i, X[i]);
    }

    return 0;
}
