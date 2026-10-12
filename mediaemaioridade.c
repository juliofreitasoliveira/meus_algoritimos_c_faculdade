#include <stdio.h>

int main (){
	int Midade;
	int idade;
	int media = 0;
	int i;
	
	
	for (i = 1; i <= 6; i++){
	
	printf("Digite a idade de 6 pessoas diferente: ");
	scanf("%d", &idade);
	
	media = media + idade;
	
	if (idade >= 18){
		Midade++;

	}
	}
	
	media = media / 6;
	
	printf("\nA media de idade dessas pessoas sao: %d e que sao >= 18 sao: %d", media, Midade);
	
	
}
