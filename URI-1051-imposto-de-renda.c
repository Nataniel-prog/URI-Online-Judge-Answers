#include <stdio.h>
#include <stdlib.h>

int main()
{

	float salario, v1, v2, v3, taxa, x;
	scanf("%f", &salario);

	if (salario>= 0 && salario<= 2000.00){
		printf("Isento\n");
	}

	else if (salario>=2000.01 && salario<=3000.00){
		taxa = (salario - 2000.00) * 0.08;
		printf("R$ %.2f\n", taxa);

	}

	else if (salario>=3000.01 && salario<=4500.00){
		v1 = 1000 * 0.08;
		
		v2 = (salario - 3000.00) * 0.18;

		taxa = v1 + v2;
		printf("R$ %.2f\n", taxa);
	}

	else if (salario>4500.00){
		v1 = 1000 * 0.08;
		
		v2 = 1500 * 0.18;

		v3 =  (salario - 4500.00) * 0.28;
		
		taxa = v1 + v2 + v3;
		printf("R$ %.2f\n", taxa);
	}

	return 0;
}
