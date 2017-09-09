#include <stdio.h>

int main(int argc, char const *argv[]){
    int fat, i=1, aux=1;
    scanf("%d", &fat);
    while(i <= fat){
        aux *= i;
        i++;
    }
    printf("%d\n", aux);
    return 0;
}
