#include <stdio.h>

int main(){
    printf("Escola Senai, Euclides Facchini\n");
    printf("Mariana Morais dos Santos\n");

    float c, f;

    printf("Digite em C: ");
    scanf("%f", &c);

    float formula = c * 1.8 + 32;

    printf("A temperatura em F: %.1f", formula);
}