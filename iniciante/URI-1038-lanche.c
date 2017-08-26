#include <stdio.h>

int main()
{
	int code, qtd; // Gerais
	double dog = 4.00, xsalada = 4.50, xbacon = 5.00, torrada = 2.00, refri = 1.50, total; // preço

	scanf("%d", &code);
	scanf("%d", &qtd);

	switch (code){
		case 1:
		printf("Total: R$ %.2lf\n", dog * qtd);
		break;

		case 2:
		printf("Total: R$ %.2lf\n", xsalada * qtd);
		break;

		case 3:
		printf("Total: R$ %.2lf\n", xbacon * qtd);
		break;
		
		case 4: 
		printf("Total: R$ %.2lf\n", torrada * qtd);
		break;
		
		case 5: 
		printf("Total: R$ %.2lf\n", refri * qtd);
		break;

	}
	
	return 0;
}
