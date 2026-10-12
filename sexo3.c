#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	
	float altura,calculo;
	char sexo;
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	printf("\nDigite seu sexo (M/F): ");
	scanf(" %c", &sexo);
	
	
	sexo = toupper(sexo);
	
	if (altura <= 0 || altura >= 3.00){
		printf("\nEsse dados não são reias, digite novamente");
	}
	else if (sexo == 'F'){
		calculo = (62.1 * altura) -44.7;
		printf("\nSeu peso ideal sendo do sexo %c eh: %.2f quilos",sexo,calculo);
	}
	else if(sexo == 'M'){
		calculo = (72.7 * altura) -58;
		printf("\nSeu peso ideal sendo do seco %c eh: %.2f quilos",sexo,calculo);
	}
	else{
		printf("\nSexo invalido digite (F ou M) para calcular seu peso ideal\n");
	}
	
	system("\npause");
	return 0;
}
