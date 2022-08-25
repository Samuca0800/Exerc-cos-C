#include <stdio.h>
int main()
{
    float areaDaParede,
        rendimentoDoLitro = 3.0,
        litrosPorLata = 18.0,
        precoDaLata = 80.0,
        precoTotal;
    int latasAComprar;

    printf("Digite a area da parede em metros quadrados: ");
    scanf("%f", &areaDaParede);

    latasAComprar = ceil(areaDaParede / (rendimentoDoLitro * litrosPorLata));
    //ceil é uma função da biblioteca matemática
    precoTotal = latasAComprar * precoDaLata;
    printf("Voce deve comprar %i lata(s), custando R$%.2f",
           latasAComprar, precoTotal);
    return 0;
}
