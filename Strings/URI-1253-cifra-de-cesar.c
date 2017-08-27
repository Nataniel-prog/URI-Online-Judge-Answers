#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n, i=0, x;

    scanf("%d", &n);

    while(i<n){
        char v[50];


        scanf("%s", v);
        scanf("%d", &x);

        int j;

        for(j=0; j<strlen(v); j++){
        int k;
            
            if(v[j]-x < 65){
            k = 91-(65-(v[j]-x));
            } else{
            k = v[j]-x;              
            }
            printf("%c", k);
        }

        printf("\n");

        i++;

    }
            
    return 0;
}
