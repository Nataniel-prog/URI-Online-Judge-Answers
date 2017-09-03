#include <stdio.h>

int main(int argc, char const *argv[]){
    int value, i;
    int *teste;

    while(scanf("%d", &value)){
        for(i=1; i<=value; i++){
            if(i == value){
                printf("%d\n", i);
            } else {
                printf("%d ", i);
            }
        }
        if(value == 0){
            return 0;
        }    
    }
}
