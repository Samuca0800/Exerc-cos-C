
#include <stdio.h>
int main()
{
    int valor, cem, cinquenta, dez, cinco, um;
    printf("Digite o valor a ser sacado (entre 10 e 600): ");
    scanf("%i", &valor);
    if (valor < 10 && valor > 600)
        printf("Valor inválido!");
    else
    {
        cem = valor / 100;  
        valor -= cem * 100; 
        cinquenta = valor / 50; 
        valor -= cinquenta * 50;
        dez = valor / 10;
        valor -= dez * 10;
        cinco = valor / 5;
        valor -= cinco * 5;
        um = valor; 
        if (cem > 0)
            printf("\n%i nota(s) de cem", cem);
        if (cinquenta > 0)
            printf("\n%i nota(s) de cinquenta", cinquenta);
        if (dez > 0)
            printf("\n%i nota(s) de dez", dez);
        if (cinco > 0)
            printf("\n%i nota(s) de cinco", cinco);
        if (um > 0)
            printf("\n%i nota(s) de um", um);
    }
    return 0;
}
