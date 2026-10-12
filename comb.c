#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float altura,raio, lata,lata1, pinta,pinta1,custo,custo1,cilindro;
	
	printf("Vamos calculr a quantidade de latas de tinta necessárias e o custo para pintar tanques cilíndricos de combustível\n");
	printf("Digite a altura do cilindro: ");
	scanf("%f", &altura);
	
	printf("Digite o raio do cilindro: ");
	scanf("%f", &raio);
	
	lata = 5;
	custo = 20;
	pinta = 3;
	
	cilindro = 2 * 3.14 * (raio*raio) + 2 * 3.14 * raio * altura;
	
	pinta1 = cilindro / pinta;
	lata1 = pinta1 / lata;
	custo1 = custo * lata1;
	
	
	printf("\nA area necessaria para pintar o tanque de combustivel eh: %.2f\n", cilindro);
	printf("\nVai ser necessario %.1f latas de tintas",lata1);
	printf("\nO custo vai ser de %.2f reais",custo1);
	printf("\nSendo %.1f metros quadrados para pintar\n", custo1);
	
	system("pause");
	return 0;
}
