#include <stdio.h>

int main(){

 printf("Escola Senai, Euclides Facchini\n");
 printf("Mariana Morais dos Santos\n");

 int quadrado;

 printf("Digite o lado do quadrado em cm: ");
 scanf("%d", &quadrado);

 int area = quadrado * quadrado;
 int perimetro = quadrado * 4;

 printf("A area do quadrado �: %d\n", area);
 printf("O perimetro do quadrado �: %d\n", perimetro);

}