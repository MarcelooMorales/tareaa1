#include <stdio.h>

int main ()
{

    float base, altura, superficie, perimetro;

    printf("Ingrese base: ");
    scanf("%f",&base);
    printf("Ingrese altura: ");
    scanf("%f",&altura);

    superficie=base*altura;
    perimetro=2*(base+altura);

    printf("El perimetro es: %f", perimetro);
    printf("La superficie es: %f", superficie);

    return 0;
}
