#include <stdio.h>

int main(){
    printf("Escola Senai, Euclides Facchini\n");
    printf("Mariana Morais dos Santos\n");

    int baseDoPrimeiro;
    int alturaDoPrimeiro;
    int baseDoSegundo;
    int alturaDoSegundo;

    printf("Digite a base do primeiro ret�ngulo em cm:\n ");
    scanf("%d", &baseDoPrimeiro);
    printf("Digite a altura do primeiro ret�mgulo em cm:\n ");
    scanf("%d", &alturaDoPrimeiro);
    printf("Digite a base do segundo ret�ngulo em cm:\n ");
    scanf("%d", &baseDoSegundo);
    printf("Digite a altura do segundo ret�ngulo em cm:\n ");
    scanf("%d", &alturaDoSegundo);

    double multiplicador = baseDoPrimeiro * alturaDoPrimeiro;
    double multiplicador2 = baseDoSegundo * alturaDoSegundo;

    printf("A �rea do primeiro ret�ngulo: %.1f\n", multiplicador);
    printf("A �rea do segundo ret�ngulo: %.1f\n", multiplicador2);

    int areaA;
    int areaB;

    if(areaA > areaB){
        printf("A �rea A � maior que a �rea B\n");
    }
    if(areaB < areaA){
        printf("A �rea B � maior que a �rea A\n");
    } 
    else if (areaA == areaB){
        printf("Os dois s�o iguais");
    } else{
        printf("Os dois s�o iguais");
    }
}