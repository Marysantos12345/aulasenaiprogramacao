#include <stdio.h>

int main(){

 printf("Escola Senai, Euclides Facchini\n");
 printf("Mariana Morais dos Santos\n");

 int numero;
 int segundoNumero;

printf("Digite o primeiro n�mero: \n");
scanf("%d", &numero);
printf("Digite o segundo n�mero: \n");
scanf("%d", &segundoNumero);


int soma = numero + segundoNumero;
int subtracao = numero - segundoNumero;
int produto = numero * segundoNumero;
int divisao = numero / segundoNumero;
double media = soma / 2.0;

printf("A soma %d\n", soma);
printf("A subtra��o %d\n", subtracao);
printf("O produto %d\n", produto);
printf("A divis�o %d\n", divisao);
printf("A m�dia entre 10 e 5: %.2f\n", media);

}
