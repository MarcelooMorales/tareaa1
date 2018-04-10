#include <stdio.h>

int nota1, nota2, nota3, nota4, numeroMatricula;
float promedio;
int main(){
  printf("Escriba el N° de Matrícula del Alumno \n");
  scanf("%d", &numeroMatricula);
  printf("Ingrese la primera nota del Alumno \n");
  scanf("%d", &nota1);
  printf("Ingrese la segunda nota del Alumno \n");
  scanf("%d", &nota2);
  printf("Ingrese la tercera nota del Alumno \n");
  scanf("%d", &nota3);
  printf("Ingrese la cuarta nota del Alumno \n");
  scanf("%d", &nota4);
  promedio = (nota1+nota2+nota3+nota4);
  promedio = promedio/4;
  printf("El N° de Matrícula el alumno es %d \n", numeroMatricula);
  printf("El promedio de Notas del Alumno es de %f \n", promedio);
  return 0;
}
