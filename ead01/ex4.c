#include <stdio.h>

int main()
{
    float salarioAnterior,
        percentualDeAumento,
        diferencaEntreSalarios,
        salarioAtual;

    printf("Digite seu salário atual: ");
    scanf("%f", &salarioAnterior);

    if (salarioAnterior <= 280)
        percentualDeAumento = 20;
    else if (salarioAnterior <= 700)
        percentualDeAumento = 15;
    else if (salarioAnterior <= 1500)
        percentualDeAumento = 10;
    else
        percentualDeAumento = 5;
    diferencaEntreSalarios = salarioAnterior * (percentualDeAumento / 100.0);
    salarioAtual = salarioAnterior + diferencaEntreSalarios;
    printf("\nSeu salário antes do reajuste era de R$%.2f", salarioAnterior);
    printf("\nSeu salário foi aumentado em %.1f%%", percentualDeAumento);
    printf("\nSeu salário foi aumentado em R$%.2f", diferencaEntreSalarios);
    printf("\nSeu salário atual é de R$%.2f", salarioAtual);
    return 0;
}
