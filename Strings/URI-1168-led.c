#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n, i=0;
    char v[1000];

    scanf("%d", &n);

    while(i<n){
        scanf("%s", v);
        
        int j, x=0;

        for(j=0; j<strlen(v); j++){
        
            if (v[j] == '1'){
                x+=2;
            }
            else if (v[j] == '2'){
                x+=5;
            }
            else if (v[j] == '3'){
                x+=5;
            }
            else if (v[j] == '4'){
                x+=4;
            }
            else if (v[j] == '5'){
                x+=5;
            }
            else if (v[j] == '6'){
                x+=6;
            }
            else if (v[j] == '7'){
                x+=3;
            }
            else if (v[j] == '8'){
                x+=7;
            }
            else if (v[j] == '9'){
                x+=6;
            }
            else if (v[j] == '0'){
                x+=6;
            }

        }

            printf("%d leds\n", x);


    i++;


    }
    
            
    return 0;
}
