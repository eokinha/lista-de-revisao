// Calculadora de gastos mensais    

#include <stdio.h>

int main() {

    float alimentacao,
    float transporte,
    float total;

    printf("Digite o valor gasto com alimentacao: ");
    scanf("%f", &alimentacao);
    printf("Digite o valor gasto com transporte: ");
    scanf("%f", &transporte);

    total = alimentacao + transporte;

    printf("O total gasto no mes foi de: %.2f\n", total);

    return 0;
}

