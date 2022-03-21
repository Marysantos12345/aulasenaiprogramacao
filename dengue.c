#include <stdio.h>

int main(){

 printf("Escola Senai, Euclides Facchini\n");
 printf("Mariana Morais dos Santos\n");

 int casosSuspeitos;
 int casosConfirmados;
 int quantidadeDeMortes;

 printf("Preencha com as seguintes informações sobre a dengue em\n");
 printf("Digite os casos suspeitos: \n");
 scanf("%d", &casosSuspeitos);
 printf("Digite os casos confirmados \n");
 scanf("%d", &casosConfirmados);
 printf("Digite a quantidade de mortes: \n");
 scanf("%d", &quantidadeDeMortes);

 printf("Informações sobre a dengue em Votuporanga\n");
 printf("Casos Suspeitos %d\n", casosSuspeitos); 
 printf("Casos Confirmados %d\n", casosConfirmados);
 printf("Quantidade de mortes %d\n", quantidadeDeMortes);

 int soma = casosSuspeitos + casosConfirmados + quantidadeDeMortes;

 printf("Total de dados: %d", soma);

}