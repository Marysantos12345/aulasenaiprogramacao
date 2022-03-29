#include <stdio.h>

int main(){

    int x, y, resultado;

    printf("Informe dois numeros: \n");
    scanf("%d %d", &x, &y);

    resultado = x * y;

    printf("Resultado: %d", resultado);

    return 0;
}