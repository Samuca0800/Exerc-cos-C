
#include <stdio.h>
int main()
{
    printf("\nLojas Tabajara\n");
    float total = 0, dinheiro, valor = 0;
    int produto = 0;

    while (produto=0)
    {
        produto++;
        printf("Produto %d: R$ ", produto);
        scanf("%f", &valor);
        if (valor == 0)
            break;
        total += valor;
    }

    printf("Total: R$ %.2f", total);
    printf("\nDinheiro: R$ ");
    scanf("%f", &dinheiro);
    printf("Troco: %.2f", dinheiro - total);
    return 0;
}
