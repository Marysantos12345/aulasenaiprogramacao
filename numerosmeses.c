#include<stdio.h>

int main(){
    printf("Escola Senai, Euclides Facchini\n");
    printf("Mariana Morais dos Santos\n");

    int numero;

    printf("Digite um n�mero inteiro de 1 a 12 correspondente ao m�s desejado: ");
    scanf("%d", &numero);

    if(numero == 1){
        printf("O n�mero corresponde ao m�s de Janeiro");
    }
    if(numero == 2){
        printf("O n�mero corresponde ao m�s de Fevereiro");
    }
    if(numero == 3){
        printf("O n�mero corresponde ao m�s de Mar�o");
    }
    if(numero == 4){
        printf("O n�mero corresponde ao m�s de Abril");
    }
    if(numero == 5){
        printf("O n�mero corresponde ao m�s de Maio");
    }
    if(numero == 6){
        printf("O n�mero corresponde ao m�s de Junho");
    }
    if(numero == 7){
        printf("O n�mero corresponde ao m�s de Julho");
    }
    if(numero == 8){
        printf("O n�mero corresponde ao m�s de Agosto");
    }
    if(numero == 9){
        printf("O n�mero corresponde ao m�s de Setembro");
    }
    if(numero == 10){
        printf("O n�mero corresponde ao m�s de Outubro");
    }
    if(numero == 11){
        printf("O n�mero corresponde ao m�s de Novembro");
    }
    if(numero == 12){
        printf("O n�mero corresponde ao m�s de Dezembro");
    }else{
        printf("O n�mero n�o corresponde a nenhum m�s do ano");
    }
}
