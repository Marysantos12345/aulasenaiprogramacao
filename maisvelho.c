#include<stdio.h>

int main(){
    printf("Escola Senai, Euclides Facchini\n");
    printf("Mariana Morais dos Santos\n");

   int joana;
   int pedro;
   int ismael;
 
   printf("Digite a idade de Joana: ");
   scanf("%d", &joana);
   printf("Digite a idade de Pedro: ");
   scanf("%d", &pedro);
   printf("Digite a idade de ismael: ");
   scanf("%d", &ismael);

   if(joana > pedro && joana > ismael){
    printf("Joana � mais velha \n");
   }
   else if(pedro > joana && pedro > ismael){
    printf("Pedro � mais velho \n");
   } 
   else{
    printf("Ismael � o mais velho dentre os tr�s");
   }
}