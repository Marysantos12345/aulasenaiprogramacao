#include <stdio.h>

int main(){
   printf("Escola Senai, Euclides Facchini\n");
   printf("Mariana Morais dos Santos\n");

   int alunas = 0;
   int alunos = 0;
  
   printf("Quantos alunas tem na sala?");
   scanf("%d", &alunas);
   printf("Quantos alunos tem na sala?");
   scanf("%d", &alunos);
   printf("Nessa sala tem %d alunas e %d alunos", alunas, alunos);
   
}