#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	float altura, pesoideal;
	char sexo;
	
	printf("Vamos descobrir seu peso ideal!");
	printf("\nDigite sua altura: ");
	scanf("%f", &altura);
	
	if (altura <= 0 || altura >= 3.00){
		printf("\nAltura invalida, digite novamente");
	}
	else{
		printf("\nDigite seu sexo (F/M): ");
		scanf(" %c", sexo);
		
		sexo = toupper(sexo);
		
		if (sexo == 'F'){
			pesoideal = (62.1*altura)-44.7;
			printf("\nO sexo digitado foi %c e o peso idela %.2f quilos\n", sexo, pesoideal);
		}
		
	
	}
	return 0;
}
