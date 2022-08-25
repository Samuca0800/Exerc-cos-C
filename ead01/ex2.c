#include <stdio.h>
int main()
{
    float salarioHora,
        horasTrabalhadas,
        IR,
        INSS,
        sindicato,
        salarioLiquido,
        salarioBruto;

    printf("Digite quanto voce recebe por hora: ");
    scanf("%f", &salarioHora);
    printf("Digite quantas horas voce trabalhou esse mes: ");
    getchar();
    scanf("%f", &horasTrabalhadas);

    salarioBruto = salarioHora * horasTrabalhadas;
    IR = salarioBruto * (11.0 / 100);
    INSS = salarioBruto * (8.0 / 100);
    sindicato = salarioBruto * (5.0 / 100);
    salarioLiquido = salarioBruto - IR - INSS - sindicato;

    printf("+ Salário Bruto : R$%.2f\n", salarioBruto);
    printf("- IR (11%) : R$%.2f\n", IR);
    printf("- INSS (8%) : R$%.2f\n", INSS);
    printf("- Sindicato ( 5%) : R$%.2f\n", sindicato);
    printf("= Salário Liquido : R$%.2f", salarioLiquido);
    return 0;
}
