
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
    float preco;
    int i;
    printf("Preço do pão: ");
    scanf("%f", &preco);
    printf("\nLojas Quase Dois - Tabela de preços");
    for ( i = 1; i <= 50; i++){
	
        printf("\n%2d - R$ %5.2f", i, preco * i);
	}
}
