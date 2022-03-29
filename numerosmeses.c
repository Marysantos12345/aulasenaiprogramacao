#include<stdio.h>

int main(){
    printf("Escola Senai, Euclides Facchini\n");
    printf("Mariana Morais dos Santos\n");

    int numero;

    printf("Digite um número inteiro de 1 a 12 correspondente ao mês desejado: ");
    scanf("%d", &numero);

    if(numero == 1){
        printf("O número corresponde ao mês de Janeiro");
    }
    if(numero == 2){
        printf("O número corresponde ao mês de Fevereiro");
    }
    if(numero == 3){
        printf("O número corresponde ao mês de Março");
    }
    if(numero == 4){
        printf("O número corresponde ao mês de Abril");
    }
    if(numero == 5){
        printf("O número corresponde ao mês de Maio");
    }
    if(numero == 6){
        printf("O número corresponde ao mês de Junho");
    }
    if(numero == 7){
        printf("O número corresponde ao mês de Julho");
    }
    if(numero == 8){
        printf("O número corresponde ao mês de Agosto");
    }
    if(numero == 9){
        printf("O número corresponde ao mês de Setembro");
    }
    if(numero == 10){
        printf("O número corresponde ao mês de Outubro");
    }
    if(numero == 11){
        printf("O número corresponde ao mês de Novembro");
    }
    if(numero == 12){
        printf("O número corresponde ao mês de Dezembro");
    }else{
        printf("O número não corresponde a nenhum mês do ano");
    }
}
