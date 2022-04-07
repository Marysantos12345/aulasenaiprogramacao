#include <stdio.h>

int main(){
    printf("Escola Senai, Euclides Facchini\n");
    printf("Mariana Morais dos Santos\n");

    double numeroDaBandeira = 1.80;
    double numeroDaBandeira2 = 2.30;
    int kilometragem;
    int escolhaBandeira;

    printf("Digite o número da bandeira 1 ou 2: \n");
    scanf("%d", &escolhaBandeira);
    

    if(escolhaBandeira == 1){
        printf("Digite a kilometragem rodada: \n");
        scanf("%d", &kilometragem);
        double multiplicador = kilometragem * numeroDaBandeira;
        printf("O valor da corrida é: R$%.2f", multiplicador);
       
    }
    if(escolhaBandeira == 2){
        printf("Digite a kilometragem rodada: \n");
        scanf("%d", &kilometragem);
        double multiplicador = kilometragem * numeroDaBandeira2;
        printf("O valor da corrida é: R$%.2f", multiplicador);
    }
}