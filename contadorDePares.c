#include <stdio.h>
#include <stdlib.h>

int main() {

    int num, i;
    int pares = 0;

    printf("== Vamos descobrir quais os numeros pares! ==\n");

    for (i = 1; i <= 6; i++) {

        printf("Digite o %d numero: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            pares++;
        }
    }

    printf("\nVoce digitou %d numeros pares.\n", pares);

    return 0;
}
