#include <stdio.h>

int main(int argc, char const *argv[]){
    float s=0, i=1, j=1;
    for(i=1; j<=39; i*=2, j+=2){
        s += j/i;
    }
    printf("%.2f\n", s);

    return 0;
}
