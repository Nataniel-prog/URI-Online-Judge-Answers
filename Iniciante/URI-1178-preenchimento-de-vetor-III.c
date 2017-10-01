#include <stdio.h>

int main(int argc, char const *argv[]){
    double X;
    int N[1000];
    scanf("%lf", &X);
    int i;
    for(i=0; i <= 99; i++){
        printf("N[%d] = %.4lf\n", i, X);
        X = X / 2;
    }

    return 0;
}
