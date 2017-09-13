#include <stdio.h>

int main(){
    int amount, i=0, j, k;
    scanf("%d", &amount);
    for(i=0; i < amount; i++){
        scanf("%d %d", &j, &k);
        int aux = 0, m = 0;   
        while(m < k){
            if(j % 2 != 0){
                aux += j;
                m++;
            }
            j++;
        }
        printf("%d\n", aux);
    }
    return 0;
}
