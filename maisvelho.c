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
    printf("Joana é mais velha \n");
   }
   else if(pedro > joana && pedro > ismael){
    printf("Pedro é mais velho \n");
   } 
   else{
    printf("Ismael é o mais velho dentre os três");
   }
}