#include <stdio.h>

int main(int argc, char const *argv[]){
    int lines, limit, i=1;
    scanf("%d %d", &lines, &limit);

    while(i <= limit){
        printf("%d", i);
        if(i % lines == 0){
            printf("\n");
        } else {
            printf(" ");
        }
        i++;
    }
    return 0;
}
