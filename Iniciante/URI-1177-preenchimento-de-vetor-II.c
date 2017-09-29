#include <stdio.h>

int main(int argc, char const *argv[]){
    int T, N[1000];
    scanf("%d", &T);

    int i, j;
    for(i=0; i < 1000; i++){
        if(j == T)
            j = 0;
        N[i] = j;
        printf("N[%d] = %d\n", i, N[i]);
        j++;
    }

    return 0;
}