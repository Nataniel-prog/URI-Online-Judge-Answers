#include<stdio.h>

/*
Leia 2 valores com uma casa decimal(x e y)
Determine o quadrante ao qual pertence o ponto
Ou se está sobre um dos eixos cartesianos ou na origem(x=y=0)
Se o ponto estiver na origem, escrever a mensagem "Origem".
Se o ponto estiver sobre um dos eixos escreva "Eixo X" ou "Eixo y"
*/

int main(){
    float x,y;

    scanf("%f%f",&x,&y);

    if(x==0.0 && y==0.0){
        printf("Origem\n");
    }
    else if(x>0 && y>0){
        printf("Q1\n");
    }
    else if(x<0 && y>0){
        printf("Q2\n");
    }
    else if(x<0 && y<0){
        printf("Q3\n");
    }
    else if(x>0 && y<0){
        printf("Q4\n");
    }
    else if(x==0 && y>0 || y<0){
        printf("Eixo Y\n");
    }
    else if(x>0 || x<0 && y==0){
        printf("Eixo X\n");
    }
    return 0;
}
