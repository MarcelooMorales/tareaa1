#include <stdio.h>
#include <math.h>

float lado1, lado2, hipotenusa, lado1Cuadrado, lado2Cuadrado, sumaLados;
int main(){
  printf("Ingrese la medida en CM del lado 1 \n");
  scanf("%f", &lado1);
  printf("Ingrese la medida en CM del lado 2 \n");
  scanf("%f", &lado2);
  lado1Cuadrado = lado1*lado1;
  lado2Cuadrado = lado2*lado2;
  sumaLados = lado1Cuadrado+lado2Cuadrado;
  hipotenusa = sqrt(sumaLados);
  printf("La hipotenusa es= %f \n", hipotenusa);
  return 0;
}
