#include <stdio.h>

int main() {
    float preco_atual;
    float preco_minimo = 10000.0; // Inicializado alto para a primeira comparação funcionar
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o preço %d: ", i + 1);
        scanf("%f", &preco_atual);

        if (preco_atual < preco_minimo) {
            preco_minimo = preco_atual; // Atualiza o menor preço encontrado
        }
    }

    printf("\nO menor preço digitado foi: R$ %.2f\n", preco_minimo);

    return 0;
}
