#include <stdio.h>

void potencia(int a, int b){
    int resultado = 1;
    for(int i = 0; i < b; i++){
        resultado = resultado * a;
}
   printf("O resultado é %d\n", resultado);

}

int main(){
    int potencia1;
    int potencia2;
    
   printf("Digite o número: ");
   scanf("%d", &potencia1);
   printf("Elevado: ");
   scanf("%d", &potencia2);

   potencia(potencia1, potencia2);
   



}
