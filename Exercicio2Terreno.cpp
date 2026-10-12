#include <stdio.h>
#include <stdlib.h>

int main()
{
	float h, l, calculo;
	
	printf("Vamos calcular a area do terreno");
	
	printf("Digite o lado maior do terreno: ");
	scanf("%f", &l);
	
	if (l <= 0){
		printf("\nValor deve ser maior que 0 (zero)");
	}
	else{
		printf("\nDigite o lado menor do terreno: ");
		scanf("%f", &h);
		
		if (h <= 0){
			printf("\nValor deve ser maior que 0 (zero)");
		}
		else{
			calculo = l*h;
			
			printf("\nA area do terreno e: %.2f", calculo);
		}
	}
}
