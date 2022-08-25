
#include <stdio.h>
int main()
{
	int i;
    printf("Lojas Quase Dois - Tabela de preços");
    for (i = 1; i <= 50; i++){
        printf("\n%2d - R$ %5.2f", i, 1.99 * i);
	}	
}
