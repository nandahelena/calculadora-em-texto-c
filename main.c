#include <stdio.h>
#include <stdbool.h>

int main() {
    bool sair = false;

    while (sair == false) {
        printf("===============================\n");
        printf("Calculadora Simples\n");
        printf("===============================\n");
        printf("Selecione uma operação\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");

        int opcao;
        scanf("%d", &opcao);

        while (opcao < 1 || opcao > 5) {
            printf("Opção inválida. Por favor, escolha uma operação válida: ");
            scanf("%d", &opcao);
        }

        if (opcao == 5) {
            sair = true;
            break;
        }

        float a, b;
        printf("Digite o primeiro número: ");
        scanf("%f", &a);
        printf("Digite o segundo número: ");
        scanf("%f", &b);

        switch (opcao) {
            case 1:
                printf("Resultado: %g + %g = %g\n", a, b, a + b);
                break;
            case 2:
                printf("Resultado: %g - %g = %g\n", a, b, a - b);
                break;
            case 3:
                printf("Resultado: %g * %g = %g\n", a, b, a * b);
                break;
            case 4:
                if (b == 0) {
                    printf("Erro: Divisão por zero não é permitida.\n");
                } else {
                    printf("Resultado: %g / %g = %g\n", a, b, a / b);
                }
                break;
        }

        char opcaosn;
        do {
            printf("Deseja realizar outra operação? (s/n): ");
            scanf(" %c", &opcaosn);

            if (opcaosn == 'n') {
                sair = true;
            } else if (opcaosn != 's') {
                printf("Erro: Opção inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
            }
        } while (opcaosn != 's' && opcaosn != 'n');
    }

    printf("Obrigado por usar a calculadora! Até a próxima.\n");
    return 0;
}
