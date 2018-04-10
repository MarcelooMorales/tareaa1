#include <stdio.h>

int numeroaOperar, cuadrado, cubo;
int main(){
  printf("Escriba a continuación un número entero para imprimir su cuadrado y su cubo\n");
  scanf("%d", &numeroaOperar);
  cuadrado = numeroaOperar*numeroaOperar;
  cubo = cuadrado*numeroaOperar;
  printf("El cuadrado de %d es %d, y el cubo de %d es %d \n", numeroaOperar, cuadrado, numeroaOperar, cubo);
  return 0;
}
