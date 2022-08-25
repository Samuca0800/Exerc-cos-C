
#include <stdio.h>
int main()
{
    float a, b, c, delta, raiz1, raiz2;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    if (a == 0)
        printf("Não é uma equação do segundo grau");
    else
    {
        printf("Digite o valor de b: ");
        getchar();
        scanf("%f", &b);
        printf("Digite o valor de c: ");
        getchar();
        scanf("%f", &c);
        delta = pow(b, 2) - (4 * a * c);
        if (delta < 0)
            printf("Delta menor que 0. Não há raízes reais.");
        else if (delta == 0)
        {
            raiz1 = (-b) / (2 * a);
            printf("Delta é zero. A raíz é %f, raiz", raiz1);
        }
        else
        {
            raiz1 = (-b + sqrt(delta)) /
                    (2 * a); // sqrt é a função de raiz quadrada da biblioteca
                             // matemática
            raiz2 = (-b - sqrt(delta)) / (2 * a);
            printf("Delta maior que zero. A raíz 1 é %f, e a raiz 2 é %f",
                   raiz1, raiz2);
        }
    }
    return 0;
}
