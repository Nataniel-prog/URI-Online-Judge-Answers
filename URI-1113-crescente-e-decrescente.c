#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int a, b;
    while(scanf("%d %d", &a, &b)){
        if(a > b){
            printf("Decrescente\n");
        } else if(a < b) {
            printf("Crescente\n");
        } else {
            return 0;
        }
    }
    return 0;
}
