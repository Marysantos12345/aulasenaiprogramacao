#include <stdio.h>

int main(){
   printf("Escola Senai, Euclides Facchini\n");
   printf("Mariana Morais dos Santos\n");

   int joana;
   int pedro;

   printf("Digite a idade de Joana: ");
   scanf("%d", &joana);
   printf("Digite a idade de Pedro: ");
   scanf("%d", &pedro);

   if(joana > pedro){
        printf("Joana é mais velha");
   }
    else{
        printf("Pedro é mais velho");
   }


}
