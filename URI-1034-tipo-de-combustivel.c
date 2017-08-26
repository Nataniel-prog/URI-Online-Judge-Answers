#include <stdio.h>
main()
{
    int Alcohol=0,Gasoline=0,Diesel=0, x;
    start:while(scanf("%d",&x)==1){
        if(x<1 || x>4)
            goto start;
        else{
            if(x==1)
                Alcohol++;
            else if(x==2)
                Gasoline++;
                else if(x==3)
                Diesel++;
                else if(x==4){
                        printf("MUITO OBRIGADO\n");
                        printf("Alcool: %d\n",Alcohol);
                        printf("Gasolina: %d\n",Gasoline);
                        printf("Diesel: %d\n",Diesel);
                        break;
                }
        }
    }
}
