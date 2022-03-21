#include <stdio.h>

int main(){

 printf("Escola Senai, Euclides Facchini\n");
 printf("Mariana Morais dos Santos\n");

 int numero;
 int segundoNumero;

printf("Digite o primeiro número: \n");
scanf("%d", &numero);
printf("Digite o segundo número: \n");
scanf("%d", &segundoNumero);


int soma = numero + segundoNumero;
int subtracao = numero - segundoNumero;
int produto = numero * segundoNumero;
int divisao = numero / segundoNumero;
double media = soma / 2.0;

printf("A soma %d\n", soma);
printf("A subtração %d\n", subtracao);
printf("O produto %d\n", produto);
printf("A divisão %d\n", divisao);
printf("A média entre 10 e 5: %.2f\n", media);

}
