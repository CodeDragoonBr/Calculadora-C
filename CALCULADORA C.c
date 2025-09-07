#include <stdio.h>

int main() {
    int escolha;
    float num1, num2;

    // Exibe o menu
    printf("Calculadora Simples\n");
    printf("====================\n");
    printf("Escolha a operacao:\n");
    printf("1. Soma\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("Digite a opcao (1/2/3/4): ");
    scanf("%d", &escolha);

    // Solicita os dois números ao usuário
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // Realiza a operação escolhida
    switch (escolha) {
        case 1:
            printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case 4:
            // Verifica se o divisor é zero
            if (num2 != 0) {
                printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            } else {
                printf("Erro: Divisao por zero!\n");
            }
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}

