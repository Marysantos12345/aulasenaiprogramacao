#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){

int palavra(){
FILE* f;

f = fopen("teste.txt", "r");
if(f == 0){
    printf("Banco de dados não disponível\n\n");
     exit(1);
   } 
    fclose(f);
}
    printf("Banco de dados");
}
