#include <stdio.h>
#include <stdlib.h>

int teste(int senha, int entrada){
	scanf("%d",&entrada);
	if( senha != entrada){
		
		printf("Senha Invalida\n"); 
		return teste(senha,entrada);
	
	}else{
		
		printf("Acesso Permitido\n");
		return 0;
	
	}

}

int main(){
	int senha = 2002;
	int entrada;

	teste(senha, entrada);	

	return 0;
}
