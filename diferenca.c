#include<stdio.h>

int main(){
    printf("Escola Senai, Euclides Facchini\n");
    printf("Mariana Morais dos Santos\n");

    int numero1;
    int numero2;

    printf("Digite o primeiro n�mero inteiro: ");
    scanf("%d", &numero1);
    printf("Digite o segundo n�mero inteiro: ");
    scanf("%d", &numero2);

    int subtraindo = numero1 - numero2;

    printf("A diferen�a do maior pelo menor n�mero �: %d ", subtraindo);

}
