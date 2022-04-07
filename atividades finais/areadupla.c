#include <stdio.h>

int main(){
    printf("Escola Senai, Euclides Facchini\n");
    printf("Mariana Morais dos Santos\n");

    int baseDoPrimeiro;
    int alturaDoPrimeiro;
    int baseDoSegundo;
    int alturaDoSegundo;

    printf("Digite a base do primeiro retângulo em cm:\n ");
    scanf("%d", &baseDoPrimeiro);
    printf("Digite a altura do primeiro retâmgulo em cm:\n ");
    scanf("%d", &alturaDoPrimeiro);
    printf("Digite a base do segundo retângulo em cm:\n ");
    scanf("%d", &baseDoSegundo);
    printf("Digite a altura do segundo retângulo em cm:\n ");
    scanf("%d", &alturaDoSegundo);

    double multiplicador = baseDoPrimeiro * alturaDoPrimeiro;
    double multiplicador2 = baseDoSegundo * alturaDoSegundo;

    printf("A área do primeiro retângulo: %.1f\n", multiplicador);
    printf("A área do segundo retângulo: %.1f\n", multiplicador2);

    int areaA;
    int areaB;

    if(areaA > areaB){
        printf("A área A é maior que a área B\n");
    }
    if(areaB < areaA){
        printf("A área B é maior que a área A\n");
    } 
    else if (areaA == areaB){
        printf("Os dois são iguais");
    } else{
        printf("Os dois são iguais");
    }
}